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
	int k,m,n,a[100],sum[100];//????k???mn???? 
	cin>>k;
	for(int w=0;w<100;w++)//????????????? 
	{
		sum[w]=0;
	}
	for(int i=0;i<k;i++)//???? 
	{
		cin>>m>>n;//????????? 
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<n;k++)
			{
				cin>>a[k];//?????????? 
				if(j==0||j==m-1||k==0||k==n-1)//?????? 
				sum[i]=sum[i]+a[k];//??? 
			}
		}
	}
	for(int p=0;p<k;p++)
	{cout<<sum[p]<<endl;}//??????? 

	return 0;
} 