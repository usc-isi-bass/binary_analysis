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
	int n,i,j;
	double a[30],b[30],dis;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf",&a[i],&b[i]);
	}
	dis=sqrt((a[2]-a[1])*(a[2]-a[1])+(b[2]-b[1])*(b[2]-b[1]));
    for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(sqrt((a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i]))>dis)
			{
				dis=sqrt((a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i]));
			}
		}
	}
	printf("%.4lf",dis);
}