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
	char s[1000];
	int n,m=0,i;
	gets(s);
	n=strlen(s);
         char *p=s;
	for(i=0;i<=n;i++,p++)
	{
		if(*p!=' ')
			m++;
	        if(*p==' '&&m!=0)
		{
			printf("%d,",m);
	                m=0;
		}
		if(*p=='\0')
			printf("%d",m-1);
	}
}
