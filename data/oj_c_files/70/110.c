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
	double longestd=0;
	double *x,*y;
	double d;
	x=(double*)malloc(sizeof(double)*n);
	y=(double*)malloc(sizeof(double)*n);
	for(i=0;i<n;i++){
		double x1,y1;
		scanf("%lf%lf",&x1,&y1);
		*(x+i)=x1;
		*(y+i)=y1;
	}
	for(i=0;i<n-1;i++){
		double x2,y2;
		for(j=1;j<n-i;j++){
			x2=*(x+i)-*(x+i+j);
			y2=*(y+i)-*(y+i+j);
			d=sqrt(x2*x2+y2*y2);
	   		if(d>longestd)longestd=d;
        }
	}
    printf("%.4lf\n",longestd);
	free(x);
	free(y);
	return 0;
}
