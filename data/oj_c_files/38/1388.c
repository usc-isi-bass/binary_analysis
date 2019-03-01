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
	int m,n,i,j;
	double sz[NUM][LEN];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		double sum=0;
		for(j=0;j<n;j++){
			scanf("%lf",&sz[i][j]);
			sum+=sz[i][j];
		}
		double a;
		a=sum/n;
		sum=0;
		for(j=0;j<n;j++){
			sum+=(sz[i][j]-a)*(sz[i][j]-a);
		}
		sum=sum/n;
		sum=sqrt(sum);
		printf("%.5lf\n",sum);
	}
	return 0;
}