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

double fangcha(double *pi,int n)
{
	int i;
	double *pa;
	pa=pi;
//	printf("hanshu%lf\n",*pi);
	double sum=0,ave;
	for(i=0;i<n;i++)
	{
		sum+=*pi;
		pi++;
	}
	ave=sum/n;
//	printf("hanshuave=%lf\n",ave);
	double s=0;
	for(i=0;i<n;i++)
	{
		s+=((*pa-ave)*(*pa-ave));
		*pa++;
//		printf("hanshuzhongs1=%lf\n",s);
	}
//	printf("hanshuzhongs1=%lf\n",s);
	s=s/(double)n;
//	printf("hanshuzhongs2=%lf\n",s);
	s=sqrt(s);
	return s;
}
int main()
{
	int k,i,j;
	double x[100][100];
	int b[100];
	double xx[100];
	scanf("%d",&k);
//	printf("%d",k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&b[i]);
		for(j=0;j<b[i];j++)
		{
			scanf("%lf",&x[i][j]);
	//		printf("%lf")
		}
	}
	double *pi;
	for(i=0;i<k;i++)
	{
		pi=&x[i][0];
//		printf("waiwei%lf\n",*pi);
		xx[i]=fangcha(pi,b[i]);
		printf("%.5f\n",xx[i]);
	}
	return 0;
}