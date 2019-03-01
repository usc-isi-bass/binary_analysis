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
	cin>>n;
	int x[n+1];
	double dif[n+1], ave,sum=0,max=0; 
	for(i=1;i<n+1;i++)
	{
		cin>>x[i];
		sum=sum+x[i]; 
	}
	ave=sum/n;
	for(i=1;i<n+1;i++)
	{
		for(j=i;j<n+1;j++)
		{
			if(x[j]<x[i])
			{
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
	for(i=1;i<n+1;i++)
	{
		dif[i]=x[i]-ave;
		if(dif[i]<0) dif[i]=-dif[i];
		if(dif[i]>max) max=dif[i];
	}
	int flag=0;
	for(i=1;i<n+1;i++)
	{
		if(dif[i]==max)
		{
			if(flag==0) 
			{
				cout<<x[i];
				flag++;
			}
			else cout<<","<<x[i];
		}
	}
	return 0;
} 