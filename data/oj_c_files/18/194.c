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

// ?????????.cpp : Defines the entry point for the console application.
// ????????????????
int a[100][100];                              //???????????????
int sum(int n)                                //??????????????????
{
	int i=0,j=0,min=0,count=0;
	for(i=0;i<n;i++)                          //?????????????????????????
	{
		min=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]<min)
				min=a[i][j];
			else 
				min=min;
		}
		for(j=0;j<n;j++)
		{
			a[i][j]=a[i][j]-min;
		}
	}
	for(i=0;i<n;i++)                          //?????????????????????????
	{
		min=a[0][i];
		for(j=0;j<n;j++)
		{
			if(a[j][i]<min)
				min=a[j][i];
			else 
				min=min;
		}
		for(j=0;j<n;j++)
		{
			a[j][i]=a[j][i]-min;
		}
	}
	count=count+a[1][1];                       //???????a[1][1]???
	if(n==2)                                   //???????????count
		return count;
	else                                       //?????n-1??????????
	{ 
		for(i=2;i<n;i++)     
			a[i-1][0]=a[i][0];
		for(j=2;j<n;j++)
			a[0][j-1]=a[0][j];
		for(i=2;i<n;i++)
			for(j=2;j<n;j++)
				a[i-1][j-1]=a[i][j];
		count=count+sum(n-1);
		return count;
	}
}
int main()                                           //?????
{
	int n,i=0,j=0,k=0,b[100]={0};                    //n?????
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				cin>>a[j][k];
			}
		}
		b[i]=sum(n);                                //??sum??
	}
	for(i=0;i<n;i++) 
	{
		cout<<b[i]<<endl;
	}
	return 0;
}