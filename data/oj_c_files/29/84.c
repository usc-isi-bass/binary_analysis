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
	int m,n[1000],i,j,k,c;
	double sum[1000],x[1000];
	int a=2,b=1;
	for(i=0;i<1000;i++){
		x[i]=a*1.0/b;
		c=b;
		b=a;
		a=a+c;
	}
	scanf("%d",&m);
	for(j=0;j<m;j++){
		scanf("%d",&n[j]);
		sum[j]=0;
		for(k=0;k<n[j];k++){
			sum[j]+=x[k];
		}
	}
	for(j=0;j<m;j++){
		printf("%.3lf\n",sum[j]);
	}
	return 0;
}