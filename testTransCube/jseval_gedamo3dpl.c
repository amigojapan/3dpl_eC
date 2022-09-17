#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "quickjs.h"

void ec_3dpl_qb(char const *cubeName, float x,float y, float z);

//static JSValue js_result(JSContext *ctx, JSValueConst this_val, 
char outputgedamo[10000];


static JSValue js_3dpl_qb(JSContext *ctx, JSValueConst this_val, 
	int argc, JSValueConst *argv) {
   char const *cubeName;
   cubeName = JS_ToCString(ctx, argv[0]);
   strcat(outputgedamo, cubeName);
   //in the following code: char const *s;s = JS_ToCString(ctx, argv[0]); I am getting the error jseval_gedamo3dpl.c:11:18: error: expected declaration specifiers before ‘s’  , what does this mean?
   //11:45 PM <GeDaMo> amigojapan: or you can test with if (JS_IsNumber(argv[i])) 
   //there is also a JS_IsString()
   float x,y,z;
   x = atof(JS_ToCString(ctx, argv[1]));
   y = atof(JS_ToCString(ctx, argv[2]));
   z = atof(JS_ToCString(ctx, argv[3]));
   
   char o2[1000];
   sprintf(o2," x=%f,y=%f,z=%f",x,y,z);
   strcat(outputgedamo, o2);
   ec_3dpl_qb(cubeName, x, y, z);
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
	for (i = 0; i < argc; ++i)
	{
		s = JS_ToCString(ctx, argv[i]);
		//printf("%s\n", s);
      strcat(outputgedamo, s);
		JS_FreeCString(ctx, s);
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
}

char * evalgedamo(char * parameter0)
{
   strcpy(outputgedamo,"");
	JSRuntime *rt = JS_NewRuntime();
	JSContext *ctx = JS_NewContext(rt);

	create_function(ctx);
   char code[50000];
   sprintf(code,"%s", parameter0);
   printf("\ncode hexdump of following code %s is:\n",code);
   for(int c=0;c<strlen(code);c++) {
      printf("%x",code[c]);
   }
   printf("\nend of hex dumps\n");
	JS_Eval(ctx, code, strlen(code), "example", JS_EVAL_TYPE_GLOBAL);
   return outputgedamo;
}