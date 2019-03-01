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
	struct{
		double x,y;
	}point[50];
	int i;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		double x1,y1;
		scanf("%lf%lf",&x1,&y1);
		point[i].x=x1;
		point[i].y=y1;
	}
	double max=0;
	int j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
		double dis;
		dis=sqrt((point[j].x-point[i].x)*(point[j].x-point[i].x)+(point[j].y-point[i].y)*(point[j].y-point[i].y));
		if(dis>max)
			max=dis;
		}
	}
	printf("%.4lf\n",max);
	return 0;
}

