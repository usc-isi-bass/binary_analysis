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
	int i,k,j,n;
	double x[100],a[100],b[100],c[100],s[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		a[i]=0;
        for(j=0;j<k;j++){
		scanf("%lf",&(x[j]));
		a[i]+=x[j];
		}
		b[i]=a[i]/k;
		c[i]=0;
        for(j=0;j<k;j++){
        c[i]+=(x[j]-b[i])*(x[j]-b[i]);
		}

		s[i]=sqrt(c[i]/k);
		}
    for(i=0;i<n;i++){
		printf("%.5lf\n",s[i]);
		}
	return 0;
}
