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
	int i,n,j,m;
	double x[100],y[100],d[100][100],t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			d[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(d[i][j]>t){
				t=d[i][j];
			}
		}
	}
	printf("%.4lf",t);
return 0;
}
