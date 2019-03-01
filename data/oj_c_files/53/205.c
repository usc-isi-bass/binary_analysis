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
int a,i,n;
int b[100];
int c;//a'
for(i=0;i<101;i++)
b[i]=0;
scanf("%d",&a);
c=a;
for (i=0;i<a;i++)
{
	scanf("%d",&b[i]);
	
}
for (i=0;i<a;i++)
{
	if(i!=0)
	{
		for(n=i-1;n>=0;n--)
		{
			if (b[i]==b[n])
			{
				b[i]=0;
				c--;
			}
		}
	}
	
}
for(i=0;i<a;i++)
{
	if(b[i]!=0)
	{
		if (i==0)
			printf("%d",b[i]);
		else
			printf(",%d",b[i]);
	}
}
scanf("%d",&b[0]);
}

