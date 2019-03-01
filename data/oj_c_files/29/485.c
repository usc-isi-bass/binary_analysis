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
	int n,bc[100],c[100],qnx,i,j;
	float sum;
	scanf("%d",&n);
	bc[0]=2;
	bc[1]=3;
	c[0]=1;
	c[1]=2;
	for(i=2;i<100;i++){
		bc[i]=bc[i-2]+bc[i-1];
		c[i]=c[i-2]+c[i-1];
	}
	for(i=0;i<n-1;i++){
		scanf("%d",&qnx);
		sum=0;
		for(j=0;j<qnx;j++){
			sum+=1.0*bc[j]/c[j];
		}
		printf("%.3f\n",sum);
	}
	scanf("%d",&qnx);
		sum=0;
		for(j=0;j<qnx;j++){
			sum+=1.0*bc[j]/c[j];
		}
		printf("%.3f",sum);


	return 0;
}