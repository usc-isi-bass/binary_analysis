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

int main (){
	int m,n,i,j;
	double a[100],s[100],x[100],zh,pfh;
     for(i=0;i<100;i++){
		s[i]=a[i]=0;
	}
   	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &m);
		zh=0;pfh=0;
		for(j=0;j<m;j++){
			scanf("%lf", &x[j]);
			zh+=x[j];
		}
		a[i]=zh/m;
        for(j=0;j<m;j++){
			pfh+=(x[j]-a[i])*(x[j]-a[i]);
		}
		s[i]=(double)sqrt(pfh/m);
	}
	for(i=0;i<n;i++){
		printf("%.5lf\n",s[i]);
	}
	return 0;
}






