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
int n,k,i,j;
double sz[100],sum=0,p,q,w;
scanf("%d",&k);
for(i=0;i<k;i++){
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%lf",&sz[j]);
	}
	for(j=0;j<n;j++){
		sum+=sz[j];
	}
	p=sum/n;
	sum=0;
	for(j=0;j<n;j++){
		sum+=(sz[j]-p)*(sz[j]-p);
		q=sum/n;
	}
	w=sqrt(q);
	printf("%.5lf\n",w);
	sum=0;
}
}