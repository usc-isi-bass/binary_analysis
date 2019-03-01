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
	double x[1000],a,s[1000],S[1000];
	scanf("%d",&k);
	for(i=0;i<k;i++){
		s[i]=0;
		a=0;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&x[j]);
			a+=x[j]/n;
		}
		for(j=0;j<n;j++){
		    
			s[i]+=(x[j]-a)*(x[j]-a)/n;
		}
		S[i]=sqrt(s[i]);
	}
	for(i=0;i<k;i++){
		printf("%.5lf\n",S[i]);
	}
	return 0;
}