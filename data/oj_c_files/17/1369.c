#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

match(char s[], char r[], int len) // s: ?????r: ????len: ???
{
	char stack[100],c; // ???
	int top=0; //??????????
	int pos; // ??????
	for(pos=0; pos<len; ++pos)
		r[pos]=' '; // ???????????????????
          r[len]='\0';
	for(pos=0; pos<len; ++pos)  //?????????????
	{
		c=s[pos];
		if(c=='(')  stack[top++]=pos;  // ????????
		else if(c==')')
			if(top>0) top--;    // ????????????????????
			else r[pos]='?';   // ?????????????????�?�?
	}
	while(top>0) 
	{  pos=stack[--top];
	   r[pos]='$';   // ??????????????????????�&�?
	}
}
outresult(char s[], char r[])
{
	puts(s);
	putchar('\n');
	puts(r);
	putchar('\n');
}
main()
{
	 char line[101],result[101],ch;
	 int pos=0;
while((ch=getchar())!=EOF) //???????
{
	if(ch!='\n') line[pos++]=ch; // ????
	else  // ???
		{ line[pos]='\0';
                     match(line, result,pos);
		  outresult(line,result);
                     pos=0;
	  }
}
}