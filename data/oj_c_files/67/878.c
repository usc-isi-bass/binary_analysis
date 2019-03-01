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
	int n,a,b,i,sz[100],zs[100];
	float x,y[100];
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	x=(float)b/a*100;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&sz[i],&zs[i]);
		y[i]=(float)zs[i]/sz[i]*100;	
	}
	for(i=0;i<n-1;i++)
	{
	    if(y[i]-x>5)
		{
			printf("better\n");
		}
		else if(x-y[i]>5)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}