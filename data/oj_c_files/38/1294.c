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

int main() {
	int i,j,k,n;
	double * a,sum,aver;
	scanf("%d",&k);
	for (i=0;i<k;i++) {
		scanf("%d",&n);
		a = (double *)malloc(n);
	 
		sum = 0.0;
		for (j=0;j<n;j++) {
			scanf("%lf",&a[j]);
			sum+=a[j];
		} 
		aver = sum/(double)n;
		sum = 0;
		for (j=0;j<n;j++) {
		   sum+=(a[j]-aver)*(a[j]-aver);
		} 
		aver = sqrt((sum)/(double)n);
		printf("%.5lf\n",aver);
	}

	return 0;
}