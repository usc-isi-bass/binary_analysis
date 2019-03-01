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
	int i,n,zs,yx;
	double x,y,cha;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&zs,&yx);
		if(i==0)
		{
			x=100.0*yx/zs;
		}
		else
		{
			y=100.0*yx/zs;
			cha=x-y;
			if(cha>5)
			{
				printf("worse\n");
			}
			else if(cha<-5)
			{
				printf("better\n");
			}
			else
			{
				printf("same\n");
			}
		}
	}

	return 0;
}