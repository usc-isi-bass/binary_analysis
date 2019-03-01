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

void main(){
	int m,i,n,j;
	double a[1001];
	double sum;
	scanf("%d",&m);
	a[1]=1;
	a[2]=2;
	for(i=3;i<=1000;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&n);
		sum=0;
		for(j=1;j<=n;j++)
		{
			sum=sum+a[j+1]/a[j];
		}
		printf("%.3lf\n",sum);
	}
	
}