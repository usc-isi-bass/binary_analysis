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
	double *p[100][1000],*q[100],*a[100];
	int n,i,j,*num[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		*(num+i)=( int * )malloc(sizeof(int));
		*(a+i)=( double * )malloc(sizeof(double));
		*(q+i)=( double * )malloc(sizeof(double));
		scanf("%d",*(num+i));
		for(j=0;j<**(num+i);j++)
		{
			*(*(p+i)+j)=( double * )malloc(sizeof(double));
			scanf("%lf",*(*(p+i)+j));
		}
		for(j=0,**(a+i)=0;j<**(num+i);j++)
		{
			**(a+i)=**(a+i)+**(*(p+i)+j);
		}
		**(a+i)=**(a+i)/(**(num+i));
		for(j=0,**(q+i)=0;j<**(num+i);j++)
		{
			**(q+i)=**(q+i)+pow((**(*(p+i)+j)-**(a+i)),2);
		}
		**(q+i)=**(q+i)/(**(num+i));**(q+i)=sqrt(**(q+i));
		printf("%.5f\n",**(q+i));
	}
}
