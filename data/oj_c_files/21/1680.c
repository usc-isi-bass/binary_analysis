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

void average(int a[],float b[])
{
	int n=0,sum=0,i;
	float aver;
	for(;a[n]!=0;n++)
		sum+=a[n];
	aver=(float)sum/n;
	for(i=0;i<n;i++)
		b[i]=a[i]-aver;
}
float max(float b[],int n)
{
	int i,k=0;
	for(i=0;i<n;i++)
	if(fabs(b[i])>fabs(b[k])) k=i;
	return fabs(b[k]);
}
void main()
{
	int n,a[300]={0},i,j=0;
	float b[300]={0},c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	average(a,b);
	c=max(b,n);
	for(i=0;i<n;i++)
	{
		if(b[i]==(-c)) 
		{
			if(j!=0) printf(",");
			printf("%d",a[i]);
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==c)
		{
			if(j!=0) printf(",");
			printf("%d",a[i]);
		}
	}
	printf("\n");
}

