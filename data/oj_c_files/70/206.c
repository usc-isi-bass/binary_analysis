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
	int n,i,j;
	scanf("%d",&n);
	struct point{
		double x,y;
};
	struct point points[1000];

		for(i=0;i<n;i++)
		{  double x1,y1;   
      scanf("%lf %lf",&x1,&y1);
	  points[i].x=x1;
      points[i].y=y1;}
		double distance[1000];
		int p=0;
		double max=0;
		for(i=0;i<n;i++){
			for(j=0;j<n&&j!=n;j++){
				distance[p]=sqrt((points[i].x-points[j].x)*(points[i].x-points[j].x)+(points[i].y-points[j].y)*(points[i].y-points[j].y));
         if(distance[p]>max)
		 {max=distance[p];}
		 else max=max;
		 p++;
		}
		}
		 printf("%.4f",max);
	return 0;
}

