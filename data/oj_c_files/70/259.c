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
	double large=0,dis;

	struct{
	double x;
	double y;
	} a[10000];

	int j, i;
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&a[i].x,&a[i].y);
	}

	
	
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				dis=sqrt(pow(a[i].x-a[j].x,2)+pow(a[i].y-a[j].y,2));
		
		if(dis>large)
		{
			large=dis;
		}
	}
		}

	printf("%.4f\n",large);

	return 0;

	
}

