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
	int n,m,i,j;
	double l[1000],k[100],s=0,h=0,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%lf",&l[j]);
			s=s+l[j];
		}
		a=(double)(s/m);
		for(j=0;j<m;j++){
			h=h+(l[j]-a)*(l[j]-a);
		}
		b=(double)(h/m);
		k[i]=sqrt(b);
		s=0;
		h=0;
	}
	for(i=0;i<n;i++){
		printf("%.5lf\n",k[i]);
	}
	return 0;
}