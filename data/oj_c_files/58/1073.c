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
	char str[100];
	int n,i,k;
	char *p;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(str);
		k=1;
		p=str;
		if(((*p>=1&&*p<=64)||(*p>=91&&*p<=96)||(*p>=123))&&*p!='_')
			k=0;
		p++;
		while(*p!='\0')
		{
			if(((*p>=1&&*p<=47)||(*p>=58&&*p<=64)||(*p>=91&&*p<=96)||(*p>=123))&&*p!='_')
			{
				k=0;
				p++;
			}
			else p++;
		}
		printf("%d\n",k);
	}
}