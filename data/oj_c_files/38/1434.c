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

double average(double a[100],int n)
{
	double *p;
	double sum1=0,sum2=0,average1,average2;
	for(p=a;p<a+n;p++)
	{
		sum1=sum1+*p;
	}
	average1=sum1/n;
	for(p=a;p<a+n;p++)
	{
		sum2=sum2+(*p-average1)*(*p-average1);
	}
	average2=sum2/n;
	return (sqrt(average2));
}
int main()
{
	int n,m;double a[100];
	int i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		for(j=0;j<m;j++)
			cin>>a[j];
		printf("%.5f\n", average(a,m));
	}
	return 0;
}