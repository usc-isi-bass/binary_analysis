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
	int i,j;
	double a[100][100];
    double x[100],y[100];
	double max=0;
	int N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
        scanf("%lf%lf",&x[i],&y[i]);
	for(i=0;i<N;i++)    
		for(j=i+1;j<N;j++)
            a[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		    if(a[i][j]>max)
		        max=a[i][j];
	printf("%.4f\n",max);
	return 0;
}
