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
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
        int n;
		scanf("%d",&n);
		double sz[100];
		double sum=0;
		double a;
		for(int r=0;r<n;r++){
			scanf("%lf",&sz[r]);
			sum+=sz[r];
		}
		a=sum/n;
		sum=0;
		for(int b=0;b<n;b++){
			sz[b]=(sz[b]-a)*(sz[b]-a);
			sum+=sz[b];
		}
		double result;
		result=pow(sum/n,0.5);
		printf("%.5lf\n",result);
	}
	return 0;
}