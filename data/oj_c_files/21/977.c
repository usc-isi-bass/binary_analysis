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

int main ()
{
	double num[310]={0};
	double pianli[310]={0};
	int n;
	cin>>n;
	double sum=0;
	for (int i=0;i<n;i++)
	{
		cin>>num[i];
		sum+=num[i];
	}
	double average=sum/n;
	double max=0;
	for (int i=1;i<=n-1;i++)
		for (int j=0;j<n-i;j++)
		{
			if (num[j]>num[j+1]) 
			{
				double t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	for (int i=0;i<n;i++)
	{
		pianli[i]=num[i]-average;
		if (pianli[i]<=0.00001) pianli[i]=-pianli[i];
		if (max<pianli[i])  max=pianli[i];
	}
	int douhao=0;
	for (int i=0;i<n;i++)
	{
		if (pianli[i]>max-0.0001&&pianli[i]<max+0.0001)
		{
			if (douhao!=0) cout<<",";
			cout<<num[i];
			douhao++;
		}
	}
	
	return 0;
}