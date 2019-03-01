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

int main(){
	int k,i,j;
	double a[100],sum,sum1,aver,S,n;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%lf",&n);
		sum=0;
		sum1=0;
		for(j=0;j<n;j++){
			scanf("%lf",&(a[j]));
			sum+=a[j];
		}
		aver=sum/n;
		for(j=0;j<n;j++){
			a[j]=(a[j]-aver)*(a[j]-aver);
			sum1+=a[j];
		}
		S=sqrt(sum1/n);
		printf("%.5lf\n",S);
	}
	return 0;
	
}