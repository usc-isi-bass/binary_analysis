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
	int n,a[1000],i;
	double d=0,e=0,f=0,g=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18)
		{
			d+=1;
		}
		else if(a[i]<=35)
		{
			e+=1;
		}
		else if(a[i]<=60)
		{
			f+=1;
		}else
		{
			g+=1;
		}
	}
	printf("1-18: %.2lf%%\n",d*100/n);
	printf("19-35: %.2lf%%\n",e*100/n);
	printf("36-60: %.2lf%%\n",f*100/n);
	printf("60??: %.2lf%%\n",g*100/n);
	return 0;
}
