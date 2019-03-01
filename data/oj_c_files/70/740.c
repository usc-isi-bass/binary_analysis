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

main()
{
	double a[300]={0},b[300]={0},d,c=0;
	int i,r,n;
	scanf ("%d",&n);
    for (i=0;i<=n-1;i++)
	{
		scanf ("%lf",&a[i]);
		scanf ("%lf",&b[i]);
	}
	for (i=0;i<=n-2;i++)
	{
		for (r=i+1;r<=n-1;r++)
		{
			d=sqrt((a[i]-a[r])*(a[i]-a[r])+(b[i]-b[r])*(b[i]-b[r]));
			if (c<d)
				c=d;
		}
	}
    printf("%.4f\n",c);
}