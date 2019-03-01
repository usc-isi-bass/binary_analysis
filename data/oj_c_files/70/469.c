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
	int n,i,k;
	double a[100],b[100],dis,fang=0,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%lf%lf",&a[i],&b[i]);
    for(k=1;k<n;k++)
	{
		for(i=k+1;i<=n;i++)
		{
			t=(a[i]-a[k])*(a[i]-a[k])+(b[i]-b[k])*(b[i]-b[k]);
			if(fang<t)
			{
				fang=t;
			}
		}
	}
	dis=sqrt(fang);
	printf("%.4lf",dis);
	return 0;
}