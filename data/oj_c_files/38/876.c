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
	int k,n,i,j;
	double x[1000],a=0.0,c=0.0,d,b;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&x[j]);
		}
		for(j=0;j<n;j++){
			a=a+x[j];
		}
		b=1.0*a/n;
		for(j=0;j<n;j++){
			c=pow(x[j]-b,2)+c;
		}
		d=sqrt(1.0*c/n);
		printf("%.5lf\n",d);
		a=0.0;
		c=0.0;
	}
	return 0;
}

         

