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
	int n;
	scanf("%d",&n);
	struct point
	{
		double x;
		double y;
	}p[100];
    

	double d;
	int i=0,j=0;
	
	double max=0;
	for (i=0;i<n;i++)
	{
		scanf("%lf %lf",&p[i].x,&p[i].y);
		for (j=0;j<i;j++)
		{
	     d=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
	
		  if (d>max)
		  {
			  max=d;

		  }
        }
     }
	printf("%.4lf",max);
	return 0;

}