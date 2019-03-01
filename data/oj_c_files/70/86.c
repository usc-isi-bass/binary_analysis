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

int main(){
	int a;
	scanf("%d",&a);
	struct point{
		double x,y;
	}point[n];
	int i=0;
	for(i=0;i<a;i++){
		scanf("%lf",&point[i].x);
		scanf("%lf",&point[i].y);
	}

	int v=0;
	double d=0;
	double max=0;
	for(i=0;i<a;i++)
	{
		for(v=0;v<a;v++){
			d=sqrt((point[i].x-point[v].x)*(point[i].x-point[v].x)+(point[i].y-point[v].y)*(point[i].y-point[v].y));
				if(d>max){
					max=d;
				}
		}
	}
	printf("%.4f\n", max);
	return 0;
}

