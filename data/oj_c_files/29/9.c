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
	double he[100]={0},a[100],b[100];
	int n,i,j,sz[100];
	a[0]=2,b[0]=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&sz[i]);
	}
	for(j=0;j<n;j++){
		he[j]=2;
	for(i=1;i<sz[j];i++){
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1];
		he[j]+=a[i]/b[i];
	}
	}
	for(j=0;j<n;j++){
	printf("%.3lf\n",he[j]);
	}
	

	return 0;
}