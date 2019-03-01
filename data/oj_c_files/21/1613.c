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
	int n,i,j;
	double num[300],e,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&num[i]);
		c+=num[i];
	}
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			if(num[j]>num[j+1]){
				e=num[j];
				num[j]=num[j+1];
				num[j+1]=e;
			}
		}
	}
	if((c/n-num[0])==(num[n-1]-c/n))
		printf("%.0lf,%.0lf\n",num[0],num[n-1]);
	else if((c/n-num[0])>(num[n-1]-c/n))
		printf("%.0lf\n",num[0]);
	else if((c/n-num[0])<(num[n-1]-c/n))
		printf("%.0lf\n",num[n-1]);
	return 0;
}
