#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "quickjs.h"

void ec_3dpl_qb(char const *cubeName, float x,float y, float z);
void ec_3dpl_cl(char const *cubeName, char const *color);
//static JSValue js_result(JSContext *ctx, JSValueConst this_val, 
char outputgedamo[10000]="no output";


static JSValue js_3dpl_qb(JSContext *ctx, JSValueConst this_val, 
	int argc, JSValueConst *argv) {
   char const *cubeName;
   char o2[1000];
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

   float x,y,z;
   x = atof(JS_ToCString(ctx, argv[1]));
   y = atof(JS_ToCString(ctx, argv[2]));
   z = atof(JS_ToCString(ctx, argv[3]));

   sprintf(o2," x=%f,y=%f,z=%f",x,y,z);
   strcat(outputgedamo, o2);
   ec_3dpl_qb(cubeName, x, y, z);
   return this_val;
}

static JSValue js_3dpl_cl(JSContext *ctx, JSValueConst this_val, 
	int argc, JSValueConst *argv) {
   char const *cubeName;
   cubeName = JS_ToCString(ctx, argv[0]);
   strcat(outputgedamo, cubeName);
   //in the following code: char const *s;s = JS_ToCString(ctx, argv[0]); I am getting the error jseval_gedamo3dpl.c:11:18: error: expected declaration specifiers before ‘s’  , what does this mean?
   //11:45 PM <GeDaMo> amigojapan: or you can test with if (JS_IsNumber(argv[i])) 
   //there is also a JS_IsString()

   char o2[1000];
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
}
JSValue jsFprint(JSContext *ctx, JSValueConst jsThis, int argc, JSValueConst *argv, FILE *f) {
  for (int i = 0; i < argc; ++i) {
    if (i != 0) {
      fputc(' ', f);
    }
    const char *str = JS_ToCString(ctx, argv[i]);
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

char * evalgedamo(char * code)
{
   strcpy(outputgedamo,"");
	JSRuntime *rt = JS_NewRuntime();
	JSContext *ctx = JS_NewContext(rt);

	create_function(ctx);
   //char code[50000];
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
   JSValue ret =JS_Eval(ctx, code, strlen(code), "example", JS_EVAL_TYPE_GLOBAL);
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
   return outputgedamo;
}