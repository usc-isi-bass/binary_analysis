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
	int i,j,l;
	char a[100],p;
	scanf("%s",a);
	p=a[0];
	l=strlen(a);
	for(i=1;i<l;i++)
	{
		if(a[i]!=p)
		{
			for(j=i;j>=0;j--)
			{
				if(a[j]==p)
				{
					printf("%d %d\n",j,i);
					a[j]=0;
					break;
				}
			}
		}
	}
}