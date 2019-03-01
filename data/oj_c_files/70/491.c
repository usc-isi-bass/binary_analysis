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
	int n,i,num=0,j;
	double x[100],y[100],dis,d[10000],a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&x[i],&y[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			a=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
			d[num]=sqrt(a);
			
			num++;}
	}
	dis=d[0];
    for(num=0;num<(n*n-n)/2-1;num++){
       if(d[num]>dis)
		   dis=d[num];}
	printf("%.4f\n",dis);
	return 0;
}