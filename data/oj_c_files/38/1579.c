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
	int n=0,i,m=0,j=0;
	double a[1000],sum=0,biaocha=0,s=0;
	a[1000]=0;
		scanf("%d",&n);
	for(i=0;i<n;i++){
sum=0;biaocha=0;s=0;
scanf("%d",&m);
for(j=0;j<m;j++){
scanf("%lf",&a[j]);
sum+=(double)a[j];
}
for(j=0;j<m;j++){
	biaocha+=(double)(a[j]-sum/m)*(a[j]-sum/m);}

s=(double)sqrt(biaocha/m);
printf("%.5f\n", s);
	}

	return 0;
}

