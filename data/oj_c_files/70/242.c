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
	int n,k,i;
	double max;
	scanf("%d",&n);
	struct{
		double x,y,dis[1000];
	}a[1000];
	for(k=1;k<=n;k++)
	{
        scanf("%lf %lf",&a[k].x,&a[k].y);
	}
    for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
         a[k].dis[i]=(a[k].x-a[i].x)*(a[k].x-a[i].x)+(a[k].y-a[i].y)*(a[k].y-a[i].y);
		 if(a[k].dis[i]>=max)
		 {
			 max=a[k].dis[i];
		 }

		}
	}
	printf("%.4f\n",sqrt(max));
	return 0;
}

