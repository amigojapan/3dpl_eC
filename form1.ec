#define __ecere_C
#include "quickjs.h"
import "ecere"
import "SyntaxHighlighting"
//static JSValue js_result(JSContext *ctx, JSValueConst this_val,
char outputgedamo[10000]="no output";
#define inititalcubesMaxCout 10;
int cubesCount=0;
int cubesMaxCout=inititalcubesMaxCout;
static JSValue js_3dpl_qb(JSContext *ctx, JSValueConst this_val,
	int argc, JSValueConst *argv) {
   char const *cubeName;
   char o2[1000];
   if(cubesCount>cubesMaxCout) {
      strcpy(outputgedamo, "");
      sprintf(outputgedamo,"max cubes reaches reached, max is;");
      //strcat(outputgedamo,itoa(cubesMaxCout));
      strcat(outputgedamo, "you can set this value with setCubesCout(number");
      return this_val;
   }
   cubesCount++;
   printf("cube count;%i",cubesCount);
   cubeName = JS_ToCString(ctx, argv[0]);
   strcat(outputgedamo, cubeName);
   //in the following code: char const *s;s = JS_ToCString(ctx, argv[0]); I am getting the error jseval_gedamo3dpl.c:11:18: error: expected declaration specifiers before ‘s’  , what does this mean?
   //11:45 PM <GeDaMo> amigojapan: or you can test with if (JS_IsNumber(argv[i]))
   //there is also a JS_IsString()
   if(!JS_IsString(argv[0])){
      sprintf(o2,"cueb name must be a \"string\", got:%s",JS_ToCString(ctx, argv[0]));
      strcat(outputgedamo, o2);
      return this_val;
   }
   if(!JS_IsNumber(argv[1])){
      sprintf(o2,"x must be float, got x=%s",JS_ToCString(ctx, argv[1]));
      strcat(outputgedamo, o2);
      return this_val;
   }
   if(!JS_IsNumber(argv[2])){
      sprintf(o2,"y must be float, got y=%s",JS_ToCString(ctx, argv[2]));
      strcat(outputgedamo, o2);
      return this_val;
   }
   if(!JS_IsNumber(argv[3])){
      sprintf(o2,"z must be float, got z=%s",JS_ToCString(ctx, argv[3]));
      strcat(outputgedamo, o2);
      return this_val;
   }

   {
      float x = (float)strtod(JS_ToCString(ctx, argv[1]), null);
      float y = (float)strtod(JS_ToCString(ctx, argv[2]), null);
      float z = (float)strtod(JS_ToCString(ctx, argv[3]), null);

      sprintf(o2," x=%f,y=%f,z=%f",x,y,z);
      strcat(outputgedamo, o2);
      ec_3dpl_qb(cubeName, x, y, z);
   }
   return this_val;
}

static JSValue js_3dpl_setMaxCubes(JSContext *ctx, JSValueConst this_val,
	int argc, JSValueConst *argv) {
   char o2[1000];
    if(!JS_IsNumber(argv[0])){
      sprintf(o2,"setMacCubes(number), number must be a number, now %s",JS_ToCString(ctx, argv[0]));
      strcat(outputgedamo, o2);
      return this_val;
   }
   {
      cubesMaxCout = atoi(JS_ToCString(ctx, argv[0]));
\
      sprintf(o2,"set cubesMaxCout to %i",cubesMaxCout);
      strcat(outputgedamo, o2);
   }
   return this_val;
}
static JSValue js_3dpl_cl(JSContext *ctx, JSValueConst this_val,
	int argc, JSValueConst *argv) {
   char const *cubeName;
   char o2[1000];

   cubeName = JS_ToCString(ctx, argv[0]);
   strcat(outputgedamo, cubeName);
   //in the following code: char const *s;s = JS_ToCString(ctx, argv[0]); I am getting the error jseval_gedamo3dpl.c:11:18: error: expected declaration specifiers before ‘s’  , what does this mean?
   //11:45 PM <GeDaMo> amigojapan: or you can test with if (JS_IsNumber(argv[i]))
   //there is also a JS_IsString()

   sprintf(o2,"colored cube");
   strcat(outputgedamo, o2);
   ec_3dpl_cl(JS_ToCString(ctx, argv[0]),JS_ToCString(ctx, argv[1]));//(cubeName, color);
   return this_val;
}
static JSValue js_result(JSContext *ctx, JSValueConst this_val,
	int argc, JSValueConst *argv)
{
   /*
   char *s = JS_ToCString(ctx, argv[0]);
   strcpy(outputgedamo,s);
   JS_FreeCString(ctx, s); // s holds the pointer to the C string
	//printf("%s\n", JS_ToCString(ctx, argv[0]));
   */

   int i;
	char const *s;
   strcpy(outputgedamo, "");
	for (i = 0; i < argc; ++i)
	{
      puts("here1");
		s = JS_ToCString(ctx, argv[i]);
      puts("here2");
      if(!s) return this_val;
      //printf("%s\n", s);
      puts("here3");
      strcat(outputgedamo, s);
		JS_FreeCString(ctx, s);
      puts("here4");
	}

   return this_val;
}

void create_function(JSContext *ctx)
{
	JSValue global_obj = JS_GetGlobalObject(ctx);

	JS_SetPropertyStr(ctx, global_obj, "result",
		JS_NewCFunction(ctx, js_result, "result", 1));

   JS_SetPropertyStr(ctx, global_obj, "qb",
		JS_NewCFunction(ctx, js_3dpl_qb, "qb", 1));

   JS_SetPropertyStr(ctx, global_obj, "cl",
		JS_NewCFunction(ctx, js_3dpl_cl, "cl", 1));

   JS_SetPropertyStr(ctx, global_obj, "setMaxCubes",
		JS_NewCFunction(ctx, js_3dpl_setMaxCubes, "setMaxCubes", 1));

}
JSValue jsFprint(JSContext *ctx, JSValueConst jsThis, int argc, JSValueConst *argv, FILE *f) {
  int i;
  for (i = 0; i < argc; ++i) {
    const char *str;
    if (i != 0) {
      fputc(' ', f);
    }
    str = JS_ToCString(ctx, argv[i]);
    if (!str) {
      return JS_EXCEPTION;
    }
    puts("here latest");
    fputs(str, f);
    strcat(outputgedamo,str);
   printf("here7");
    JS_FreeCString(ctx, str);
  }
  fputc('\n', f);
  return JS_UNDEFINED;
}

JSValue jsPrint(JSContext *ctx, JSValueConst jsThis, int argc, JSValueConst *argv) {
  return jsFprint(ctx, jsThis, argc, argv, stdout);
}

JSValue jsPrintErr(JSContext *ctx, JSValueConst jsThis, int argc, JSValueConst *argv) {
  return jsFprint(ctx, jsThis, argc, argv, stderr);
}

char * evalgedamo(const char * code)
{
   // TODO: Keep these around
	JSRuntime *rt = JS_NewRuntime();
	JSContext *ctx = JS_NewContext(rt);
   JSValue ret;

	create_function(ctx);

   outputgedamo[0] = 0;

   //sprintf(code,"%s", parameter0);
   //printf("before strcpy in gedamejseval");
   //strcpy(code,parameter0);
   //printf("after strcpy");
   /*
   printf("\ncode hexdump of following code %s is:\n",code);
   for(int c=0;c<strlen(code);c++) {
      printf("%x",code[c]);
   }
   printf("\nend of hex dumps\n");
   */
   //int exitCode=0;
   ret =JS_Eval(ctx, code, strlen(code), "example", JS_EVAL_TYPE_GLOBAL);
    if (JS_IsException(ret)) {
      JSValue e = JS_GetException(ctx);
      jsPrintErr(ctx, JS_NULL, 1, &e);
      printf("here5");
      JS_FreeValue(ctx, e);
      //exitCode = 1;
    } else if (JS_IsUndefined(ret)) {
      // nop
    } else {
      jsPrint(ctx, JS_NULL, 1, &ret);
    }
    printf("here6");
    JS_FreeValue(ctx, ret);
   return CopyString(outputgedamo);
}


#define editorColorScheme SyntaxColorScheme { \
   commentColor = { r = 125, g = 125, b = 125 }, \
   charLiteralColor = { r = 245, g = 50, b = 245 }, \
   stringLiteralColor = { r = 245, g = 50, b = 245 }, \
   preprocessorColor = { r = 120, g = 220, b = 140 }, \
   numberColor = { r = 0, g = 192, b = 192 }, \
   typeColor = { r = 21, g = 206, b = 76 }, \
   defColor = { r = 255, g = 206, b = 122 }, \
   fnColor = { r = 156, g = 183, b = 255 }, \
   keywordColors = [ skyBlue, skyBlue ] \
}

class MyCube : Cube
{
   int extraStuff;
}

Object scene { };

Map<String, Array<MyCube>> cubesMap { };

/*
class Cubes {
   public Map<String, Array<MyCube>> cubesMap { };
   public int count;
}

Cubes cubes;
*/
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
//Cube cube_model { size = { 1, 1, 1 } };

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

   void clearThings()
   {
      // This is a workaround for a potential bug where Free() on
      // a Map with Array value seems to currently invoke Free() on the Array automatically
      cubesCount=0;
      for(ca : cubesMap)
      {
         for(c : ca)
         {
            Material m = c.material;
            delete m;
            c.material = null;
            // delete c.material; // FIXME: eC but
         }
         delete ca;
      }
      cubesMap.Free();

      scene.Free(null);
   }

   String _3dplJSlib;

   Cube model {};

   String executeCode(const String preprocessedCode) {
      //const char * library = "[This is the 3DPL library]";
      //const char * code = "[This is the User's Code]";
      ZString s { allocType = heap };
      String lib = Read3dplLib();    // TODO: Read this only once
      String result;
      //s.concat("result('hi')");
      s.concat(lib);
      s.concat(preprocessedCode);
      printf("\n*this is s\"%s\"ends",s.string);
      result = evalgedamo(s);
      delete s;
      return result;
         //char *finalCode;
         //char *lib3dpl;
         //char code[100000]="test";
         /*
         int codeSize = strlen(code);
         char *library=(char *)Read3dplLib();
         int librarySize = strlen(library);
         char *completeCode;
         int totalLength=librarySize + codeSize;
         char * completeCode = new byte[totalLength + 1];

         memcpy(completeCode, library, librarySize);
         memcpy(completeCode + librarySize, code, codeSize);
         //completeCode[librarySize + codeSize] = 0;
         delete library;
         puts(completeCode);
         */
         /*
         printf("before stcpy");
         strcpy(code,postprocessedcode);
         printf("\n\n***code is this:%s",code);
         clearThings();

         Update(null);

         lib3dpl=Read3dplLib();
         finalCode = malloc(strlen((char *)lib3dpl)+strlen(code)+1);
         finalCode[0] = '\0';
         //sprintf(code,"%s\n%s",(char *)Read3dplLib(),tmp);
         strcpy(finalCode,(char *)lib3dpl);
         strcat(finalCode,code);
         puts(finalCode);
         lblOutput.caption=evalgedamo(finalCode);
         printf("next is free finalcode");
         free(finalCode);
         printf("final code freed!");
         */
         /*
         ZString s { allocType = heap };
         s.concat(Read3dplLib());
         //s.concat(postprocessedcode);
         printf("\n\n\n\n****this is s:%s",s);
         lblOutput.caption=evalgedamo(s);
         delete s;
         */
   }

   String executeDeclarations(const String code) {
         String preprocessedCode = preprocessor(code);
         String result;
         printf("preprocessor finished");
         result = executeCode(preprocessedCode);
         printf("execute code finished");
         delete preprocessedCode;
         return result;
   }
   Button btnRun
   {
      this, caption = $"Run", opacity = 0.3f, position = { 304, 112 }, displayDriver = $"OpenGL";

      bool NotifyClicked(Button button, int x, int y, Modifiers mods)
      {
         String code;
         String result;
         clearThings();
         code = editBoxDeclarations.multiLineContents;
         result = executeDeclarations(code);
         lblOutput.caption = result;
         delete code;
         delete result;
         return true;
      }
   };
   Button button1
   {
      this, caption = $"debug it", position = { 592, 312 };

      bool NotifyClicked(Button button, int x, int y, Modifiers mods)
      {
         // char *tmp = this.editBoxDeclarations.multiLineContents;

         Update(null);

         ec_3dpl_qb("a", 1,1,1);
         ec_3dpl_qb("a", 2,2,2);
         ec_3dpl_cl("a", "red");
         return true;
      }
   };

   char * escapequotes(char * in) {
      int c1,c2=0;
      char out[100000];
      for (c1=0;c1<strlen(in);c1++){
         if(in[c1]=='\"'){
            //puts("here match newline");
            out[c2]='\\';
            c2++;
            out[c2]='"';
         } else {
            out[c2]=in[c1];
         }
         c2++;
      }
      c2++;
      out[c2]='\0';
      strcpy(in,out);
      return in;
   }

   String preprocessor(const String code)
   {
      // const Color = { red: 'red', blue: 'blue', green: 'green' };

         //let regex = /while\s*\((?<CONDITION>[^\)]+)\)\s*\{\s*(?<WHILE_BODY>[^\}]+)\s*\}/g;
         //let replacement = "while ($<CONDITION>) { poke;$<WHILE_BODY> }";
         //let str = "f;while(a){T};2;while (b) { test2 };3";
         //result(str.replaceAll(regex, replacement));
      ZString JS { allocType = heap };
      String result;
      int codeLen = strlen(code);
      int allocLen = codeLen * 3;
      char * tmp = new char[allocLen+1];

      printf("preprocessor() called!");
      JS.concat("let regex = /while\\s*\\((?<CONDITION>[^\\)]+)\\)\\s*\\{*(?<WHILE_BODY>[^\\}]+)*\\}/g;");

      //loopstarttime = Date.now();  while(true) { now=Date.now() if(now>=loopstarttime+1000){result("loop timeout");break;}//loopbody }
      //strcat(JS,"let replacement = \"while ($<CONDITION>) { poke;$<WHILE_BODY> }\";");
      JS.concat("let replacement = \"loopstarttime = Date.now();  while($<CONDITION>) { now=Date.now(); if(now>=loopstarttime+5){result(\\\"loop timeout\\\");break;}$<WHILE_BODY> }\";");

      //JS.concat("let regex = /test\\s*\\((?<CONDITION>[^\\)]+)\\)\\s*\\{*(?<WHILE_BODY>[^\\}]+)\\s*\\}/g;");
      //loopstarttime = Date.now();  while(true) { now=Date.now() if(now>=loopstarttime+1000){result("loop timeout");break;}//loopbody }
      //strcat(JS,"let replacement = \"while ($<CONDITION>) { poke;$<WHILE_BODY> }\";");
      //JS.concat("let replacement = \"poke1();  test($<CONDITION>) { poke2(); $<WHILE_BODY> }\";");

      JS.concat("let str = \"");

      EscapeCString(tmp, allocLen, code, { escapeDoubleQuotes = true });
      JS.concat(tmp);
      delete tmp;
      JS.concat("\";");
      JS.concat("result(str.replaceAll(regex, replacement));");
      // EscapeCString() might be taking care of that... ChangeCh(JS, '\n', ' ');

      result = evalgedamo(JS);
      printf("\nJS=\n   %s\nR=\n   %s\noutputgedamo\n   %s\n",(String)JS,result,outputgedamo);
      delete JS;

      return result;
      /*
      code for test
var i=0;
while (i<10) {
   i++;
   //qb("b",-1,-1,0);
}
*/
   }
   EditBox editBoxDeclarations
   {
      this, caption = $"Code Editor", opacity = 0.3f, lightGreen, font = { "DejaVu Sans Mono", 20 }, size = { 500, 500 }, position = { 32, 200 }, hasVertScroll = true, displayDriver = "OpenGL", multiLine = true, tabKey = true, contents = "for(var i=-3;i<3;i++) {\n   qb(\"a\",i,i,i);\n"
   "}\n"
   "cl(\"a\",Color.red)", syntaxHighlighting = SHLFromFileName("3dpl.js");;;;;;;

      bool NotifyModified(EditBox editBox)
      {
         //this.editBoxDeclarations.multiLineContents
         //executeDeclarations();   
         printf("finished notify modified)");
         return true;
      }

      bool NotifyKeyDown(EditBox editBox, Key key, unichar ch)
      {
         //executeDeclarations();

         printf("notify key down");

         return true;
      }

      bool NotifyCharsAdded(EditBox editBox, BufferLocation before, BufferLocation after, bool pasteOperation)
      {
         //executeDeclarations();

         printf("notify chars added");

         return true;
      }

      bool NotifyCharsDeleted(EditBox editBox, BufferLocation beforeLoc, BufferLocation after, bool pasteOperation)
      {
         //executeDeclarations();

         printf("notify chars deleted");

         return true;
      }

      void NotifyUpdate(EditBox editBox)
      {
         String code = editBox.multiLineContents;

         printf("notify update");

         clearThings();
         executeDeclarations(code);
         delete code;
      }

      //4:54 PM <ESphynx> as I mentioned before NotifyUpdate might be the one you want
   };
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
            // String result="test"
            String tmp;
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
         Material m = null;

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

   ModelViewer()
   {
      ((SyntaxHighlighting)editBoxDeclarations.syntaxHighlighting).colorScheme = editorColorScheme;
   }

   ~ModelViewer()
   {
      delete ((SyntaxHighlighting)editBoxDeclarations.syntaxHighlighting).colorScheme;
      clearThings();
   }

   char * Read3dplLib()
   {
      File f = FileOpen("3dplJSlib.js", read);
      if(f)
      {
         uint64 maxSize = f.GetSize();
         //byte * buffer = new byte[maxSize + 1];
         char * buffer = new byte[maxSize + 1];
         f.Read(buffer, 1, maxSize);
         buffer[maxSize] = 0;
         //puts(buffer);
         delete f;
         return buffer;
         //delete buffer;
      }
      return null;
   }

   void OnUnloadGraphics()
   {
      model.Free(displaySystem);

      //MyCube.model.Free(displaySystem);
      displaySystem.ClearMaterials();
      displaySystem.ClearTextures();
      displaySystem.ClearMeshes();
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
      //int c;
      model.Create(displaySystem);
      model.mesh.ApplyMaterial(null);
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

void ec_3dpl_qb(char const *cubeName, float x,float y, float z)
{
   MapIterator<String, Array<MyCube>> it { map = cubesMap };
   Array<MyCube> cubesArray;
   MyCube currentCube {};
   Material m = null;

   m.OnCopy(GetDefaultMaterial());
   m.diffuse = lime, m.ambient = lime;

   // 'true' is for 'create if not found'
   if(it.Index(cubeName, true))
      // cubes already exists
      cubesArray = it.data;
   else
   {
      // create a new cube array
      cubesArray = { };
      // add it in place to the map
      it.data = cubesArray;
   }
   cubesArray.Add(currentCube);

   currentCube.Initialize();
   currentCube.transform = { scaling = { 1, 1, 1 }, position = { x, -y, z } };
   currentCube.Duplicate(modelViewer.model);
   currentCube.material = m;
   currentCube.UpdateTransform();

   scene.Add(currentCube);
   scene.UpdateTransform();

   modelViewer.Update(null);
}

void ec_3dpl_cl(const String cubeName, char const *color)
{
   // String stringColor; //="white";
   MapIterator<String, Array<MyCube>> it { map = cubesMap };
   Array<MyCube> cubesArray;
   // MyCube currentCube {};
   //Transform t;
   //Material m { };
   Color c;

   // stringColor=CopyString(color);
   // currentCube.Initialize();
   // 'true' is for 'create if not found'
   if(it.Index(cubeName, true))
   {
      // cubes already exists
      cubesArray = it.data;
      printf("color is %s", color);
      c.OnGetDataFromString(color);
      for(currentCube : cubesArray)
      {
         Material m = currentCube.material;
         //c.r=255;c.g=0;c.b=0;
         m.diffuse=c;
         m.ambient=c;
         //currentCube.UpdateTransform();
      }
      //scene.UpdateTransform();
      //modelViewer.Update(null);
   }
   else
   {//cube does not exist
      //modelViewer.lblOutput.caption="tried to set cube's ", buf1," color, but no such cube exists.";
   }
}
