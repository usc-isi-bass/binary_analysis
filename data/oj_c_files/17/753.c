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

void main()
{
	for(;;)
{
		
		char str[300];
		int i,j,k,a1=0,js1=0,l;
		gets(str);
if(feof(stdin)) break;
		puts(str);
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			if( str[i]=='(') {a1=1;js1++;}
			if( str[i]==')' && a1==0 )  {str[i]='?';}
			if( str[i]==')' && a1==1 )
			{
				if(js1>0) js1--;
				else str[i]='?';
			}
		}
		a1=0;
		js1=0;

				for(;i>=0;i--)
		{
			if( str[i]==')') {a1=1;js1++;}
			if( str[i]=='(' && a1==0 )  {str[i]='$';}
			if( str[i]=='(' && a1==1 )
			{
				if(js1>0) js1--;
				else str[i]='$';
			}
		}

		for(i=0;i<l;i++)
		{
			if(str[i]!='?' && str[i]!='$')
				str[i]=' ';
		}		puts(str);

}
}