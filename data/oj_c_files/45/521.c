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
	char a[100],b[100],*p;
	int i,j,q=0,t;
	scanf("%s%s",a,b);
	for(p=b,t=0;p<b+strlen(b);p++,t++)
	{
		if(*p==*a)
		{
			for(j=1;j<strlen(a);j++,p++)
			{
				if(*p=!*(a+j))
				{
					q=1;
					break;
				}
				if(q==0)
				{
					printf("%d\n",t);
					break;
				}
			}
		}
	}
}