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

int main()
{
	int n,i,j,t;
	double a[100]={1,2};
	double b[100];
	double sum=0;
	scanf("%d",&n);
	for(i=2;i<100;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<99;i++){
		b[i]=a[i+1]/a[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",&t);
	for(j=0;j<t;j++){
		sum=sum+b[j];
	}
	printf("%.3lf\n",sum);
        sum=0;
	}
	return 0;
}
