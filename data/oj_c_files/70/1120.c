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
	int i,j,n;
	scanf("%d",&n);
	double m=0,a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%lf %lf",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]))>m)
			   m=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
		}
	}
	printf("%.4lf",m);
	
}