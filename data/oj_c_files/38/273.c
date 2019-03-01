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
	int k,i,j,n;
	double t[1000];
	double h,s,p,m;
	scanf("%d\n",&k);
    for(i=0;i<k;i++){
		scanf("%d\n",&n);
		h=s=0;
		for(j=0;j<n;j++){
			scanf("%lf ",&t[j]);
			s=s+t[j];
		}
           p=(double)s/n;
		for(j=0;j<n;j++){
			h=h+(t[j]-p)*(t[j]-p);
		}
		m=(double)sqrt(h/n);
		printf("%.5lf\n", m);
	}
	return 0;
}
