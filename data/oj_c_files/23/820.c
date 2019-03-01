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

int main()
{
	char str[100],*p,*t,*s;
	int i,j,n;
	gets(str);
	n=strlen(str);
	for(p=str+n;p>=str;p--)
	{
		if((*p)==' ')
		{
			for(t=p+1;((*t)!=' ')&&((*t)!='\0');t++)
			{
			    printf("%c",*t);
			}
			printf(" ");
		}
			
	}
	for(s=str;((*s)!=' ')&&((*s)!='\0');s++)
		printf("%c",*s);
}