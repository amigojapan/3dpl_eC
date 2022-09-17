import "SyntaxColorScheme"
import "SyntaxHighlighting"
import "ecere"
import "form1"
default:
static Module __currentModule;

__attribute__((__common__)) Module __thisModule;

__attribute__((__common__)) Class __ecereClass_String;
__attribute__((__common__)) Class __ecereClass_SyntaxColorScheme;
__attribute__((__common__)) Property __ecereProp_SyntaxColorScheme_keywordColors;
__attribute__((__common__)) Class __ecereClass_SyntaxHighlighting;
__attribute__((__common__)) Class __ecereClass_char__PTR_;
__attribute__((__common__)) int __ecereVMethodID_class_OnCopy;
__attribute__((__common__)) int __ecereVMethodID_class_OnGetDataFromString;
__attribute__((__common__)) Class __ecereClass_double;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Array_TPL_String_;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_String___;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_int___;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__gfx__Color_;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Array_TPL_int_;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Instance;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Module;
__attribute__((__common__)) Class __ecereClass_int;
__attribute__((__common__)) Class __ecereClass_uint;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Array;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Array_Set_size;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Array_Get_size;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__com__Array_size;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Container;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Add;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Copy;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Free;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_GetCount;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Container_Set_copySrc;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__com__Container_copySrc;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__com__Iterator_Next)();
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__com__Iterator_data;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__com__Map;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__MapIterator_Get_map;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__com__MapIterator_map;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)();
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_zMin;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_zMin;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__gfx3D__Material;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial)();
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__gfx3D__Object;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)();
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create)();
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__gfx__Color;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Color_Set___ecereNameSpace__ecere__gfx__ColorRGB;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Color_Get___ecereNameSpace__ecere__gfx__ColorRGB;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx__Color___ecereNameSpace__ecere__gfx__ColorRGB;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)();
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx__Display_ambient;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx__Display_antiAlias;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx__Display_fogColor;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures)();
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__gfx__FontResource;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_faceName;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx__FontResource_faceName;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_size;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gfx__FontResource_size;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)();
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Key___ecereNameSpace__ecere__gui__SmartKey;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)();
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_Update)();
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_anchor;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_anchor;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_background;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_caption;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_display;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displayDriver;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_displayDriver;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_font;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_font;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_font;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_foreground;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_foreground;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_hasClose;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasVertScroll;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_hasVertScroll;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_opacity;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_parent;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_parent;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_position;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__Window_size;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__gui__controls__Button;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Get_opacity;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__controls__Button_opacity;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__gui__controls__EditBox;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_contents;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLine;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLine;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLineContents;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_syntaxHighlighting;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_syntaxHighlighting;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_syntaxHighlighting;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_count;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_count;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_next;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_next;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Set_text;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_text;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_CanImpactOtherLines;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_GotSpace;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_InitDraw;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_Process;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_ResetState;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__gui__controls__Label;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Get_labeledWindow;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__gui__controls__Label_labeledWindow;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__sys__File;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__sys__File_GetSize;
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__sys__File_Read;
__attribute__((__common__)) Class __ecereClass___ecereNameSpace__ecere__sys__ZString;
__attribute__((__common__)) int (*__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat)();
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_String;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_String;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__sys__ZString_String;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_char__PTR_;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__sys__ZString_char__PTR_;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_string;
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_string;
__attribute__((__common__)) Property __ecereProp___ecereNameSpace__ecere__sys__ZString_string;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__com__PrintString;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__CharMatchCategories;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__CopyString;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__EscapeCString;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__FileOpen;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__GetExtension;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__GetLastDirectory;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__GetRandom;
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__strchrmax;
void __ecereRegisterModule_form1(Module module);
void __ecereUnregisterModule_form1(Module module);
void __ecereCreateModuleInstances_form1();
void __ecereDestroyModuleInstances_form1();
void __ecereRegisterModule_SyntaxColorScheme(Module module);
void __ecereUnregisterModule_SyntaxColorScheme(Module module);
void __ecereRegisterModule_SyntaxHighlighting(Module module);
void __ecereUnregisterModule_SyntaxHighlighting(Module module);

int main(int _argc, char * _argv[])
{
   int exitCode;
   Module module;
   bool setThingsUp = !__thisModule;
   __attribute__((unused)) Class _class;
   __attribute__((unused)) Method method;
   __attribute__((unused)) Property _property;
   __attribute__((unused)) GlobalFunction function;

   if(setThingsUp)
      __thisModule = __ecere_COM_Initialize(1, _argc, (void *)_argv);

   __currentModule = module = __thisModule;
   if(!eModule_Load(module, "ecere", publicAccess))
      printf("Error loading eC module \"%s\" (shared library -- .so/.dll/.dylib)\nThings might go very wrong.\nCheck installed libraries or PATH (Windows) / (DY)LD_LIBRARY_PATH (Unix / Apple) environment variable.\n", "ecere");

   __ecereRegisterModule_form1(module);
   __ecereRegisterModule_SyntaxColorScheme(module);
   __ecereRegisterModule_SyntaxHighlighting(module);

   __ecereClass_String = eSystem_FindClass(module, "String");

   __ecereClass_SyntaxColorScheme = eSystem_FindClass(module, "SyntaxColorScheme");
   __ecereProp_SyntaxColorScheme_keywordColors = _property = eClass_FindProperty(__ecereClass_SyntaxColorScheme, "keywordColors", module);

   __ecereClass_SyntaxHighlighting = eSystem_FindClass(module, "SyntaxHighlighting");

   __ecereClass_char__PTR_ = eSystem_FindClass(module, "char *");

   _class = eSystem_FindClass(module, "class");
   method = eClass_FindMethod(_class, "OnCopy", module);
   if(method) __ecereVMethodID_class_OnCopy = method.vid;
   method = eClass_FindMethod(_class, "OnGetDataFromString", module);
   if(method) __ecereVMethodID_class_OnGetDataFromString = method.vid;

   __ecereClass_double = eSystem_FindClass(module, "double");

   __ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_ = eSystem_FindClass(module, "ecere::com::Array<MyCube>");

   __ecereClass___ecereNameSpace__ecere__com__Array_TPL_String_ = eSystem_FindClass(module, "ecere::com::Array<const String>");

   __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_String___ = eSystem_FindClass(module, "ecere::com::Array<ecere::com::Array<const String> >");

   __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_int___ = eSystem_FindClass(module, "ecere::com::Array<ecere::com::Array<int> >");

   __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__gfx__Color_ = eSystem_FindClass(module, "ecere::com::Array<ecere::gfx::Color>");

   __ecereClass___ecereNameSpace__ecere__com__Array_TPL_int_ = eSystem_FindClass(module, "ecere::com::Array<int>");

   __ecereClass___ecereNameSpace__ecere__com__Instance = eSystem_FindClass(module, "ecere::com::Instance");

   __ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___ = eSystem_FindClass(module, "ecere::com::Map<String, ecere::com::Array<MyCube> >");

   __ecereClass___ecereNameSpace__ecere__com__Module = eSystem_FindClass(module, "ecere::com::Module");

   __ecereClass_int = eSystem_FindClass(module, "int");

   __ecereClass_uint = eSystem_FindClass(module, "uint");

   __ecereClass___ecereNameSpace__ecere__com__Array = eSystem_FindClass(module, "ecere::com::Array");
   __ecereProp___ecereNameSpace__ecere__com__Array_size = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__com__Array, "size", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__com__Array_Set_size = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__com__Array_Get_size = _property.Get;

   __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer = eSystem_FindClass(module, "ecere::com::BuiltInContainer");

   __ecereClass___ecereNameSpace__ecere__com__Container = eSystem_FindClass(module, "ecere::com::Container");
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__com__Container, "Add", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__com__Container_Add = method.vid;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__com__Container, "Copy", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__com__Container_Copy = method.vid;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__com__Container, "Free", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__com__Container_Free = method.vid;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__com__Container, "GetCount", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__com__Container_GetCount = method.vid;
   __ecereProp___ecereNameSpace__ecere__com__Container_copySrc = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__com__Container, "copySrc", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__com__Container_Set_copySrc = _property.Set;

   _class = eSystem_FindClass(module, "ecere::com::Iterator");
   method = eClass_FindMethod(_class, "Index", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__com__Iterator_Index = method.function;
   method = eClass_FindMethod(_class, "Next", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__com__Iterator_Next = method.function;
   __ecereProp___ecereNameSpace__ecere__com__Iterator_data = _property = eClass_FindProperty(_class, "data", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data = _property.Get;

   __ecereClass___ecereNameSpace__ecere__com__Map = eSystem_FindClass(module, "ecere::com::Map");

   _class = eSystem_FindClass(module, "ecere::com::MapIterator");
   __ecereProp___ecereNameSpace__ecere__com__MapIterator_map = _property = eClass_FindProperty(_class, "map", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__com__MapIterator_Get_map = _property.Get;

   __ecereClass___ecereNameSpace__ecere__gfx3D__Camera = eSystem_FindClass(module, "ecere::gfx3D::Camera");
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Setup", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup = method.function;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Update", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update = method.function;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "fov", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "orientation", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "position", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "type", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_zMin = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "zMin", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_zMin = _property.Get;

   _class = eSystem_FindClass(module, "ecere::gfx3D::Euler");
   __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion = _property = eClass_FindProperty(_class, "ecere::gfx3D::Quaternion", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion = _property.Get;

   __ecereClass___ecereNameSpace__ecere__gfx3D__Material = eSystem_FindClass(module, "ecere::gfx3D::Material");

   _class = eSystem_FindClass(module, "ecere::gfx3D::Mesh");
   method = eClass_FindMethod(_class, "ApplyMaterial", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial = method.function;

   __ecereClass___ecereNameSpace__ecere__gfx3D__Object = eSystem_FindClass(module, "ecere::gfx3D::Object");
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Add", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add = method.function;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Duplicate", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate = method.function;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Free", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free = method.function;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Initialize", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize = method.function;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "UpdateTransform", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform = method.function;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "material", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "mesh", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "transform", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform = _property.Get;

   __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube = eSystem_FindClass(module, "ecere::gfx3D::meshes::Cube");
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube, "Create", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create = method.function;

   __ecereClass___ecereNameSpace__ecere__gfx__Color = eSystem_FindClass(module, "ecere::gfx::Color");
   __ecereProp___ecereNameSpace__ecere__gfx__Color___ecereNameSpace__ecere__gfx__ColorRGB = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__Color, "ecere::gfx::ColorRGB", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__Color_Set___ecereNameSpace__ecere__gfx__ColorRGB = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__Color_Get___ecereNameSpace__ecere__gfx__ColorRGB = _property.Get;

   _class = eSystem_FindClass(module, "ecere::gfx::Display");
   method = eClass_FindMethod(_class, "DrawObject", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject = method.function;
   method = eClass_FindMethod(_class, "SetCamera", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera = method.function;
   method = eClass_FindMethod(_class, "SetLight", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight = method.function;
   __ecereProp___ecereNameSpace__ecere__gfx__Display_ambient = _property = eClass_FindProperty(_class, "ambient", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient = _property.Set;
   __ecereProp___ecereNameSpace__ecere__gfx__Display_antiAlias = _property = eClass_FindProperty(_class, "antiAlias", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias = _property.Set;
   __ecereProp___ecereNameSpace__ecere__gfx__Display_fogColor = _property = eClass_FindProperty(_class, "fogColor", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor = _property.Set;
   __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity = _property = eClass_FindProperty(_class, "fogDensity", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity = _property.Set;

   _class = eSystem_FindClass(module, "ecere::gfx::DisplaySystem");
   method = eClass_FindMethod(_class, "ClearMaterials", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials = method.function;
   method = eClass_FindMethod(_class, "ClearMeshes", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes = method.function;
   method = eClass_FindMethod(_class, "ClearTextures", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures = method.function;

   __ecereClass___ecereNameSpace__ecere__gfx__FontResource = eSystem_FindClass(module, "ecere::gfx::FontResource");
   __ecereProp___ecereNameSpace__ecere__gfx__FontResource_faceName = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__FontResource, "faceName", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_faceName = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx__FontResource_size = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__FontResource, "size", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_size = _property.Get;

   _class = eSystem_FindClass(module, "ecere::gfx::Surface");
   method = eClass_FindMethod(_class, "Clear", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear = method.function;

   _class = eSystem_FindClass(module, "ecere::gui::GuiApplication");
   __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver = _property = eClass_FindProperty(_class, "driver", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver = _property.Get;

   _class = eSystem_FindClass(module, "ecere::gui::Key");
   __ecereProp___ecereNameSpace__ecere__gui__Key___ecereNameSpace__ecere__gui__SmartKey = _property = eClass_FindProperty(_class, "ecere::gui::SmartKey", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey = _property.Get;

   _class = eSystem_FindClass(module, "ecere::gui::Window");
   method = eClass_FindMethod(_class, "Capture", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture = method.function;
   method = eClass_FindMethod(_class, "Destroy", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy = method.function;
   method = eClass_FindMethod(_class, "ReleaseCapture", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture = method.function;
   method = eClass_FindMethod(_class, "Update", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_Update = method.function;
   __ecereProp___ecereNameSpace__ecere__gui__Window_anchor = _property = eClass_FindProperty(_class, "anchor", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_anchor = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_background = _property = eClass_FindProperty(_class, "background", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle = _property = eClass_FindProperty(_class, "borderStyle", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_caption = _property = eClass_FindProperty(_class, "caption", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_display = _property = eClass_FindProperty(_class, "display", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_displayDriver = _property = eClass_FindProperty(_class, "displayDriver", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displayDriver = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem = _property = eClass_FindProperty(_class, "displaySystem", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_font = _property = eClass_FindProperty(_class, "font", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_font = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_font = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_foreground = _property = eClass_FindProperty(_class, "foreground", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_foreground = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_hasClose = _property = eClass_FindProperty(_class, "hasClose", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize = _property = eClass_FindProperty(_class, "hasMaximize", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize = _property = eClass_FindProperty(_class, "hasMinimize", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_hasVertScroll = _property = eClass_FindProperty(_class, "hasVertScroll", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasVertScroll = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_opacity = _property = eClass_FindProperty(_class, "opacity", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_parent = _property = eClass_FindProperty(_class, "parent", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_parent = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_position = _property = eClass_FindProperty(_class, "position", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_size = _property = eClass_FindProperty(_class, "size", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size = _property.Get;

   __ecereClass___ecereNameSpace__ecere__gui__controls__Button = eSystem_FindClass(module, "ecere::gui::controls::Button");
   __ecereProp___ecereNameSpace__ecere__gui__controls__Button_opacity = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__Button, "opacity", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Get_opacity = _property.Get;

   __ecereClass___ecereNameSpace__ecere__gui__controls__EditBox = eSystem_FindClass(module, "ecere::gui::controls::EditBox");
   __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_contents = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "contents", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLine = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "multiLine", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLine = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLineContents = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "multiLineContents", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_syntaxHighlighting = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "syntaxHighlighting", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_syntaxHighlighting = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_syntaxHighlighting = _property.Get;

   _class = eSystem_FindClass(module, "ecere::gui::controls::EditLine");
   __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_count = _property = eClass_FindProperty(_class, "count", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_count = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_next = _property = eClass_FindProperty(_class, "next", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_next = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_text = _property = eClass_FindProperty(_class, "text", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Set_text = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text = _property.Get;

   _class = eSystem_FindClass(module, "ecere::gui::controls::EditSyntaxHL");
   method = eClass_FindMethod(_class, "CanImpactOtherLines", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_CanImpactOtherLines = method.vid;
   method = eClass_FindMethod(_class, "GotSpace", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_GotSpace = method.vid;
   method = eClass_FindMethod(_class, "InitDraw", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_InitDraw = method.vid;
   method = eClass_FindMethod(_class, "Process", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_Process = method.vid;
   method = eClass_FindMethod(_class, "ResetState", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_ResetState = method.vid;

   __ecereClass___ecereNameSpace__ecere__gui__controls__Label = eSystem_FindClass(module, "ecere::gui::controls::Label");
   __ecereProp___ecereNameSpace__ecere__gui__controls__Label_labeledWindow = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__Label, "labeledWindow", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Get_labeledWindow = _property.Get;

   _class = eSystem_FindClass(module, "ecere::sys::Degrees");
   __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians = _property = eClass_FindProperty(_class, "ecere::sys::Radians", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians = _property.Get;

   __ecereClass___ecereNameSpace__ecere__sys__File = eSystem_FindClass(module, "ecere::sys::File");
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__sys__File, "GetSize", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__sys__File_GetSize = method.vid;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__sys__File, "Read", module);
   if(method) __ecereVMethodID___ecereNameSpace__ecere__sys__File_Read = method.vid;

   __ecereClass___ecereNameSpace__ecere__sys__ZString = eSystem_FindClass(module, "ecere::sys::ZString");
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__sys__ZString, "concat", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__sys__ZString_concat = method.function;
   __ecereProp___ecereNameSpace__ecere__sys__ZString_String = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__sys__ZString, "String", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_String = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_String = _property.Get;
   __ecereProp___ecereNameSpace__ecere__sys__ZString_char__PTR_ = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__sys__ZString, "char *", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_ = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_char__PTR_ = _property.Get;
   __ecereProp___ecereNameSpace__ecere__sys__ZString_string = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__sys__ZString, "string", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_string = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_string = _property.Get;

   function = eSystem_FindFunction(module, "ecere::com::PrintString");
   if(function) __ecereFunction___ecereNameSpace__ecere__com__PrintString = function.function;

   function = eSystem_FindFunction(module, "ecere::gfx::GetDefaultMaterial");
   if(function) __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial = function.function;

   function = eSystem_FindFunction(module, "ecere::sys::CharMatchCategories");
   if(function) __ecereFunction___ecereNameSpace__ecere__sys__CharMatchCategories = function.function;

   function = eSystem_FindFunction(module, "ecere::sys::CopyString");
   if(function) __ecereFunction___ecereNameSpace__ecere__sys__CopyString = function.function;

   function = eSystem_FindFunction(module, "ecere::sys::EscapeCString");
   if(function) __ecereFunction___ecereNameSpace__ecere__sys__EscapeCString = function.function;

   function = eSystem_FindFunction(module, "ecere::sys::FileOpen");
   if(function) __ecereFunction___ecereNameSpace__ecere__sys__FileOpen = function.function;

   function = eSystem_FindFunction(module, "ecere::sys::GetExtension");
   if(function) __ecereFunction___ecereNameSpace__ecere__sys__GetExtension = function.function;

   function = eSystem_FindFunction(module, "ecere::sys::GetLastDirectory");
   if(function) __ecereFunction___ecereNameSpace__ecere__sys__GetLastDirectory = function.function;

   function = eSystem_FindFunction(module, "ecere::sys::GetRandom");
   if(function) __ecereFunction___ecereNameSpace__ecere__sys__GetRandom = function.function;

   function = eSystem_FindFunction(module, "ecere::sys::strchrmax");
   if(function) __ecereFunction___ecereNameSpace__ecere__sys__strchrmax = function.function;


      LoadTranslatedStrings(null, "testTransCube");
   _class = eSystem_FindClass(__currentModule, "eModelApp");
   if(setThingsUp) eInstance_Evolve((Instance *)&__currentModule, _class);
   __thisModule = __currentModule;
   __ecereCreateModuleInstances_form1();

   ((void(*)(void *))(void *)__currentModule._vTbl[12])(__currentModule);
   __ecereDestroyModuleInstances_form1();

   UnloadTranslatedStrings("testTransCube");

   _class = eSystem_FindClass(__currentModule, "ecere::com::Application");
   exitCode = ((ecere::com::Application)__currentModule).exitCode;
   delete __currentModule;
   return exitCode;
}
