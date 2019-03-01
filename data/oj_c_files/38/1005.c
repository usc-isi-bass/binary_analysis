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
	int k,n;
	double sum=0,a[101];
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>n; sum = 0;
		for(int j=1;j<=n;j++){
			cin>>a[j];
			sum += a[j];
		}
		double b=sum/n;
		double sum2=0;
		for(int j=1;j<=n;j++){
			sum2+=(a[j]-b)*(a[j]-b);
		}
		double S=sqrt(sum2/n);
		printf("%.5f\n",S);
	}
	return 0;
}