import "ecere"
//declarations nessesary to call functions in C files
char * evalgedamo();

class MyCube : Cube
{
   int extraStuff;
}

Object scene { };

Map<String, Array<MyCube>> cubesMap { };

//Cube model { size = { 1, 1, 1 } };
Camera camera
   {
      attachedQuaternion,
      //position = Vector3D { 0, 0, -250 },
      //orientation = Euler { 120, 30, 0 },

      position = Vector3D { 0, 0, -10 },
      orientation = Euler { 0, 0, 0 },

      zMin = 0.01f;
      fov = 53;
   };
Material defaultMaterial;
DisplaySystem ds;
Cube cube_model { size = { 1, 1, 1 } };

ModelViewer modelViewer { };

class eModelApp : GuiApplication
{
   driver = "OpenGL";
   //driver = "Direct3D8";
   //driver = "Direct3D";
}

class ModelViewer : Window
{
   caption = $"3dpleC";
   background = black;
   borderStyle = sizable;
   hasMaximize = true;
   hasMinimize = true;
   hasClose = true;
   size = { 1024, 800 };
   //anchor = { left = 8, top = 32, right = 0, bottom = 0 };
   Cube model {};

   Button btnRun
   {
      this, caption = $"Run", opacity = 0.3f, position = { 304, 112 }, displayDriver = $"OpenGL";

      bool NotifyClicked(Button button, int x, int y, Modifiers mods)
      {
         char *tmp;
         tmp=this.editBoxDeclarations.multiLineContents;
         cubesMap.Free();
         scene.Free(null);
         Update(null);

         lblOutput.caption=evalgedamo(tmp);
         return true;
      }
   };
   EditBox editBoxDeclarations { this, caption = $"editBox1", opacity = 0.3f, lightGreen, font = { "Tahoma", 20 }, size = { 500, 500 }, position = { 32, 200 }, hasVertScroll = true, displayDriver = $"OpenGL", scrollArea = { 296, 128 }, multiLine = true, contents = $"for(var i=-3;i<3;i++) {\n   qb(\"a\",i,i,i);\n"
   "}\n"
   "" };
   Label lblOutput { this, caption = $"output", foreground = white, contour, size = { 270, 61 }, position = { 32, 88 } };
   Button btnFind
   {
      this, caption = $"Find", position = { 288, 24 };

      bool NotifyClicked(Button button, int x, int y, Modifiers mods)
      {
         const String buf1 = ebFindKey.contents;
         MapIterator<String, Array<MyCube>> it { map = cubesMap };

         // 'false' is for 'don't create if not found'
         if(it.Index(buf1, false))
         {
            Array<MyCube> cubesArray = it.data;
            String result="test",tmp;
            String s;
            int c=0;
            char *index;
            index=CopyString(lblIndex.caption);
            c=atoi(index);
            //for(c=0;c<cubesArray.count;c++) {
               tmp=PrintString($"cube ",c, " x ",cubesArray[c].transform.position.x, " y " , cubesArray[c].transform.position.y," z ",cubesArray[c].transform.position.z);
               //result=PrintString(result,tmp);
            //}
            s = PrintString($"Found ", cubesArray.count, $" by that name", tmp);

            lbMessage.caption = s;
            delete s;
         }
         else
            lbMessage.caption = $"No cubes found by that name";
         return true;
      }
   };
   Button btnAdd
   {
      this, caption = $"Add", anchor = { horz = -369, vert = -215 };

      bool NotifyClicked(Button btnAdd, int x, int y, Modifiers mods)
      {
         const String buf1 = ebFindKey.contents;
         // const String buf2 = editBox2.contents;
         MapIterator<String, Array<MyCube>> it { map = cubesMap };
         Array<MyCube> cubesArray;
         MyCube currentCube {};
         Transform t;
         Material m { };

         currentCube.Initialize();
         t = currentCube.transform;
         // t.position = { 2, 2, 2 };
         t.position = { GetRandom(0, 5), GetRandom(0, 5), GetRandom(0, 5) };
         currentCube.transform = t;
         // 'true' is for 'create if not found'
         if(it.Index(buf1, true))
            // cubes already exists
            cubesArray = it.data;
         else
         {
            // create a new cube array
            cubesArray = { };
            // add it in place to the map
            it.data = cubesArray;
         }

         m.OnCopy(GetDefaultMaterial());
         currentCube.material = m;

         cubesArray.Add(currentCube);
         scene.Add(currentCube);
         //display.Lock(false);
         //currentCube.Create(displaySystem);
         currentCube.Duplicate(model);
         currentCube.UpdateTransform();
         scene.UpdateTransform();

         //display.Unlock();
         Update(null);
         lbMessage.caption = $"Added a cube.";
         return true;
      }
   };
   EditBox ebFindKey { this, caption = $"Cube Key", size = { 80, 20 }, position = { 32, 16 } };
   EditBox ebIndex { this, caption = $"Cube Index", size = { 80, 20 }, position = { 152, 8 }, contents = $"0" };
   Label lbFinKey { this, foreground = white, position = { 40, 48 }, labeledWindow = ebFindKey };
   Label lblIndex { this, caption = $"cube index", foreground = white, position = { 168, 48 } };
   Label lbMessage { this, caption = $"Add or find a key", foreground = greenYellow, position = { 32, 176 } } ;

   bool moving, lightMoving;
   Point startPosition;
   Euler startOrientation;
   Light light
   {
      diffuse = white;
      specular = white;
      // orientation = Euler { pitch = 50, yaw = 45 };
      orientation = Euler { pitch = 10, yaw = 30 };
   };

   void OnUnloadGraphics()
   {
      for(ca : cubesMap)
         for(c : ca)
            c.Free(displaySystem);
      //MyCube.model.Free(displaySystem);
      displaySystem.ClearMaterials();
      displaySystem.ClearTextures();
      displaySystem.ClearMeshes();
      scene.Initialize();
   }

   void OnResize(int w, int h)
   {
      camera.Setup(w, h, null);
      Update(null);
   }

   bool OnLeftButtonDown(int x, int y, Modifiers mods)
   {
      if(!moving && !lightMoving)
      {
         startPosition.x = x;
         startPosition.y = y;
         startOrientation = camera.orientation;
         Capture();
         moving = true;
      }
      return true;
   }

   bool OnLeftButtonUp(int x, int y, Modifiers mods)
   {
      if(moving)
      {
         ReleaseCapture();
         moving = false;
      }
      return true;
   }

   bool OnRightButtonDown(int x, int y, Modifiers mods)
   {
      if(!moving && !lightMoving)
      {
         startPosition.x = x;
         startPosition.y = y;
         startOrientation = light.orientation;
         Capture();
         lightMoving = true;
      }
      return true;
   }

   bool OnRightButtonUp(int x, int y, Modifiers mods)
   {
      if(lightMoving)
      {
         ReleaseCapture();
         lightMoving = false;
      }
      return true;
   }

   bool OnMouseMove(int x, int y, Modifiers mods)
   {
      if(moving)
      {
         /*
         Euler euler
         {
            startOrientation.yaw   - (x - startPosition.x),
            startOrientation.pitch + (y - startPosition.y),
            startOrientation.roll
         };
         */
         //camera.orientation = euler

         model.transform.position.x=-(x/100.0f)+3.5f; // it seems I need to divide by the size of the cube
         model.transform.position.y=-(y/100.0f)+3.5f;

         Update(null);
      }
      else if(lightMoving)
      {
         light.orientation = Euler
         {
            startOrientation.yaw   - (x - startPosition.x),
            startOrientation.pitch + (y - startPosition.y),
            startOrientation.roll
         };

         Update(null);
      }
      return true;
   }

   bool OnKeyDown(Key key, unichar ch)
   {
      switch(key)
      {
         case escape: Destroy(0); return false;
      }
      return true;
   }

   bool OnKeyHit(Key key, unichar ch)
   {
      switch((SmartKey) key)
      {
         case wheelDown: case minus: camera.position.z *= 1.1111111f; Update(null); break;
         case wheelUp: case plus: camera.position.z *= 0.9f; Update(null); break;
      }
      return true;
   }

   bool OnLoadGraphics()
   {
      int c;
      model.Create(displaySystem);
      //ds=displaySystem;
      //model.Create(displaySystem);
      //if(model.Create(displaySystem))
      //{
         //if(model)
         //{
            /*
            for(c = 0; c<6; c++)
            {
               //PrimitiveGroup group;
               //Material material;
               char name[20];

               sprintf(name, "Cube Face %d", c+1);
               defaultMaterial = displaySystem.GetMaterial(name);
               if(defaultMaterial)
               {
                  defaultMaterial.flags = { noFog = true, doubleSided = true, translucent = true, update = true, setupTextures = true };
                  defaultMaterial.opacity = 0.5f;
                  defaultMaterial.diffuse.r = defaultMaterial.diffuse.g = defaultMaterial.diffuse.b = 1;
                  defaultMaterial.ambient = defaultMaterial.diffuse;

                  defaultMaterial.baseMap = displaySystem.GetTexture(name);
                  if(!defaultMaterial.baseMap)
                  {
                     defaultMaterial.baseMap = Bitmap { };

                     sprintf(name, "tex%d.bmp", c+1);
                     if(c == 3) strcpy(name, "glass.bmp");

                     defaultMaterial.baseMap.LoadMipMaps(name, null, displaySystem);
                     displaySystem.AddTexture(name, defaultMaterial.baseMap);
                  }
               }
            }
            model.mesh.ApplyTranslucency(model);
            camera.target = model;
        // }
        */
         return true;
      //}
      //else
      //   return false;
   }

   void OnRedraw(Surface surface)
   {
      //int cubesCounter;
      //int cubesArrayCounter;
      //MyCube curretCube;
      //Array<MyCube> cubesArray;
      display.fogColor = blue;
      display.fogDensity = 0.000001f;

      surface.Clear(depthBuffer);

      camera.Update();

      display.antiAlias = true;
      display.SetLight(0, light);

      display.SetCamera(surface, camera);

      display.ambient = ColorRGB { 0.2f, 0.2f, 0.2f };

      //display.DrawObject(model);
      //display.DrawObject(cube_model);

      display.DrawObject(scene);
      display.SetCamera(surface, null);
   }
}

void ec_3dpl_qb(char const *cubeName, float x,float y, float z) {
         const String buf1="";// = ebFindKey.contents;
         MapIterator<String, Array<MyCube>> it { map = cubesMap };
         Array<MyCube> cubesArray;
         MyCube currentCube {};
         Transform t;
         Material m { };

         buf1=CopyString(cubeName);

         currentCube.Initialize();
         t = currentCube.transform;
         // t.position = { 2, 2, 2 };
         t.position.x=x;
         t.position.y=-y;
         t.position.z=z;
         currentCube.transform = t;
         // 'true' is for 'create if not found'
         if(it.Index(buf1, true))
            // cubes already exists
            cubesArray = it.data;
         else
         {
            // create a new cube array
            cubesArray = { };
            // add it in place to the map
            it.data = cubesArray;
         }

         m.OnCopy(GetDefaultMaterial());
         currentCube.material = m;

         cubesArray.Add(currentCube);
         scene.Add(currentCube);
         //display.Lock(false);
         //currentCube.Create(displaySystem);
         currentCube.Duplicate(modelViewer.model);
         currentCube.UpdateTransform();
         scene.UpdateTransform();

         //display.Unlock();
         modelViewer.Update(null);

}