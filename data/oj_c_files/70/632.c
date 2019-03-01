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
	double a[10],b[10],c,max=0.0;
	int n,i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf",&a[i],&b[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			c=sqrt(pow(a[j]-a[i],2)+pow(b[i]-b[j],2));
			if(c>max)
				max=c;
		}
	}
	printf("%.4lf",max);
	return 0;
}