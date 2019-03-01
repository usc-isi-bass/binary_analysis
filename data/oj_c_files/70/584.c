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
	struct
	{double x,y;
	}a[10000];
	double l,max=0;
	int i,j,n;
	
	scanf ("%d",&n);
	
	for (i=1;i<=n;i++)
		scanf ("%lf%lf",&a[i].x,&a[i].y);

	for (i=1;i<n;i++)
		for (j=i+1;j<=n;j++)
			{
				l= (a[i].x - a[j].x ) * (a[i].x - a[j].x ) + (a[i].y - a[j].y ) * (a[i].y - a[j].y );
				if (l>max) max=l;
			}
		max= sqrt(max);
		printf ("%.4lf",max);
	return 0;
}

