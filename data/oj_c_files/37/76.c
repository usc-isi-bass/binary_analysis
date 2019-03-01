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
	char a[100000];
	int i,j,t,k,c,l;
	scanf("%d\n",&t);
	for(i=1;i<=t;i++)
	{
		gets(a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			c=0;
			for(k=0;k<l;k++)
			{
				if ((j!=k)&&(a[j]==a[k])) 
				{
					c=1;
					break;
				}
			}
			if (c==0)
			{
				printf("%c\n",a[j]);
				break;
			}		
			if ((j==l-1)&&(c==1)) printf("no\n");
		}
	}
}

