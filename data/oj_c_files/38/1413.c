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


void main()
{
	int k;
	int n;
	int i=0;
	double *a[100]={NULL}, temp=0,average=0;
	scanf("%d",&k);
	for(k;k>0;k--)
	{
		scanf("%d",&n);
		average=0;
		for(i=0;i<n;i++)
		{
			*(a+i)=(double *)malloc(sizeof(double));
			scanf("%lf",&temp);
			**(a+i)=temp;
			average=average+temp;
		}
		average=average/n;
		temp=0;
		for(i=0;i<n;i++)
		{
			**(a+i)=(**(a+i)-average)*(**(a+i)-average);
			temp=temp+**(a+i);
		}
		temp=sqrt(temp/n);
		printf("%.5f\n", temp);
	}
}