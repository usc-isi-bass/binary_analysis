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
	int k,n,j,i;
	double t,sum1=0,sum2=0,a,s,x[100];
	scanf("%d",&k);
	for(j=0;j<k;j++){
		scanf("%d",&n);
		sum1=0;
		for(i=0;i<n;i++){
			scanf("%lf",&t);
			x[i]=t;
			sum1=sum1+x[i];
		}
		a=sum1/(double)n;
		sum2=0;
		for(i=0;i<n;i++){
			sum2=sum2+(x[i]-a)*(x[i]-a);
		}
		s=sqrt(sum2/(double)n);
		printf("%.5lf\n",s);
	}
	return 0;
}