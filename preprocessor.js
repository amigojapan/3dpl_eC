function PreProcessor() {
/*BUG -- fixed on 2012/03/11 japan time (still small problem remains of what if a person calls a function withing a for loop incrimentor)
 the timeout still fails when there is a second while loop (and I think also for loop) I think this is because it is not a regex passed the g parameter, how do I pass that parameter?
 but that doesnt seem to be so according to http://msdn.microsoft.com/en-us/library/system.text.regularexpressions.regex.replace.aspx
 OK, after testing, it seems the IsMatch is not general (g), and thus it is not enforcing the open curly brace, this is good news
	oh now, I realise what is going on, I am creating a while() {    once one is there, the rest of the while loops are not being replaced
	ok, now I have the problem that it is matching even when it should not match... with while\\((.+)\\)*[^{]    matches even if there is a while with an open curly brace
greg:
regex
(test\([^\)]+\)\s*)($|[^b\s])
replacement string
$1 { $2
testing string
test(xyz) fff test(pop) bggg test(uuu)
result
test(xyz) { fff test(pop) bggg test(uuu) {
still will have trouble with stuff like test(function(a);bbb;ccc)
--fixed up to here, but new problem, why doesnt this work?:
var a=0;
while(a<5) { a++; qb("a",a,a,a); }
for(b=0;b<6;b--) { qb("b",b,b,b); }
--fixed, it was creating two instaces of tghe now variable, I made the nwo variable global
*/ 
	//preprocessor
	//p=System.Text.RegularExpressions.Regex.Replace("hello world","hello","goodbye");
	//force open curly brace
   var declarations="for(a;b;c)"
   var re;
	var replacement;
	//re ="for\\((.+)\\)*[^{]";//matches if there is no curly braced at the end
	//re ="for\\((.+)\\)(?!\\s*{)\\s*\\w";
   
	re ="(for\\([^\\)]+\\)\\s*)($|[^{\\s])";
	if(declarations.match(re)) {
		//re ="for\\((.+)\\)";
		replacement="$1 { $2";
		//declarations=System.Text.RegularExpressions.Regex.Replace(declarations,re,replacement);
      
const str = "Java3foobar4Script"
const declarations = declarations.replace(re, replacement);
retult(declarations);
	}

	//force open curly brace
	re ="(while\\([^\\)]+\\)\\s*)($|[^{\\s])";
	if(System.Text.RegularExpressions.Regex.IsMatch(declarations,re)) {
		//re ="while\\((.+)\\)";
		replacement="$1 { $2";
		declarations=System.Text.RegularExpressions.Regex.Replace(declarations,re,replacement);
	}
	//do later, enclse this in an if starement, so that the following only happens if there is a match in the previous IsMatch statements, this should improve efficiency
	PostProssesdeclarations=declarations;
	//add the timer
	/*
	you can see the effect of a timeout if you do:
	var a=0;
	while(a<5) { a++; qb("a",a,a,a); }
	chnage while to while(1)    it will time out and then you can edit it after the timeout
	*/
	re ="while\\((.+)\\)\\s*{";
	replacement="starttimer(); while($1) { now=Time.realtimeSinceStartup; if(now>=(loopstarttime+timeout)) {print(\"loop timeout.\"); break;}";
	PostProssesdeclarations=System.Text.RegularExpressions.Regex.Replace(PostProssesdeclarations,re,replacement);
	//add the timer
	//you can see the effect of a timeout if you do for(a=0;a<6;a++) { qb("a",a,a,a); } then erase teh ++  which causes an infinite loop, then it willt ime out, then you can go back to edit it and change it to --
	re ="for\\((.+)\\)\\s*{";
	//print("declarations:"+declarations);
	replacement="starttimer(); for($1) { now=Time.realtimeSinceStartup; if(now>=(loopstarttime+timeout)) {print(\"loop timeout.\"); break;}";
	PostProssesdeclarations=System.Text.RegularExpressions.Regex.Replace(PostProssesdeclarations,re,replacement);

   re = RegExp("while \\((.*)\\)\\s{")
   var a="while (beep) { meep; }".replace(re, "stuff(); while (\$1) { poke; ")

}