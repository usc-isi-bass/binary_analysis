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

double f(int x)
{
	double s;
	if(x==1) s=1.0;
	else if(x==2) s=2.0;
	else s=f(x-1)+f(x-2);
	return s;
}
int main()
{
	int n,a[1000];
	int i,j,k,l;
	double sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=0;
		for(j=1;j<=a[i];j++)
		{
			sum=sum+f(j+1)/f(j);
		}
		printf("%.3lf\n",sum);
	}
	scanf("%d",&i);
	return 0;
}