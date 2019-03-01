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


struct dot
{
	double x;
	double y;
}*p;

double distance ( int i , int j )
{
	double re;
	re = sqrt ( (p[i].x-p[j].x) * (p[i].x-p[j].x) + (p[i].y-p[j].y) * (p[i].y-p[j].y) );
	return re;
}


int main()
{
	int n;
	scanf("%d",&n);
	double max = 0;
	p = ( struct dot * ) malloc ( sizeof ( struct dot ) * n );
	int i;
	for ( i = 0 ; i < n ; i ++ )
	{
		scanf("%lf %lf",&p[i].x,&p[i].y);
	}
	int j;
	for ( i = 0 ; i < n ; i++ )
	{
		for ( j = i + 1 ; j < n ; j++ )
		{
			if ( distance ( i,j) > max )
			{
				max = distance ( i,j );
			}
		}
	}
	printf("%.4lf\n",max);
	free(p);
	return 0;
}