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
	char str[100],*pstr,*x;
	char a[100],*pa;
	int n;
	gets(str);
	n=strlen(str);
	pstr=str+n-1;
	pa=a;
	for(;pstr>=str;pstr--)
	{
		if(*pstr==' ')
		{	
			x=pstr;
			pstr++;
			for(;*pstr!=' '&&*pstr!='\0';pstr++)
			{
				*pa=*pstr;
				pa++;
			}
			*pa=' ';
			pa++;
			pstr=x-1;
		}
	}
	pstr=str;
	for(;*pstr!=' '&&*pstr!='\0';pstr++)
	{
		*pa=*pstr;
		pa++;
	}
	for(pa=a;pa<a+n;pa++)
		printf("%c",*pa);
}