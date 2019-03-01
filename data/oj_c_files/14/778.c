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

int main(int argc, char* argv[])
{
	int N,i,n[num],c[num],m[num],sum[num];
	int x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;
	scanf ("%d",&N);
	for (i=0;i<N;i++)
	{
		scanf ("%d%d%d",&n[i],&c[i],&m[i]);
		sum[i]=c[i]+m[i];
	}
	for (i=0;i<N;i++)
	{
		if (sum[i]>x1)
		{
			x1=sum[i];
			y1=i;
		}
	}
	for (i=0;i<N;i++)
	{
		if (sum[i]>x2&&sum[i]<=x1&&i!=y1)
		{
			x2=sum[i];
			y2=i;
		}
	}
	for (i=0;i<N;i++)
	{
		if (sum[i]>x3&&sum[i]<=x2&&i!=y1&&i!=y2)
		{
			x3=sum[i];
			y3=i;
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",y1+1,x1,y2+1,x2,y3+1,x3);
	return 0;
}
