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

int s=0,a[100][100];
void hang(int n)
{
	for(int i=0;i<n;i++)
	{
		int min=a[i][0];
		for(int j=0;j<n;j++)
		{
			if(min>a[i][j])
				min=a[i][j];
		}
		for(int j=0;j<n;j++)
		{
			a[i][j]=a[i][j]-min;
		}
		min=0;
	}
}
void lie(int n)
{
	for(int i=0;i<n;i++)
	{
		int min=a[0][i];
		for(int j=0;j<n;j++)
		{
			if(min>=a[j][i])
				min=a[j][i];
		}
		for(int j=0;j<n;j++)
		{
			a[j][i]=a[j][i]-min;
		}
		min=0;
	}
}
void xiaoqu(int n)
{
	for(int i=1;i<n-1;i++)
	{
		a[0][i]=a[0][i+1];
		a[i][0]=a[i+1][0];
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			a[i][j]=a[i+1][j+1];
		}
	}
}
void sum(int n)
{
	if(n>1)
	{
		hang(n);
		lie(n);
		s+=a[1][1];
		xiaoqu(n);
		sum(n-1);
	}
}

int main()
{
	int n;
	cin>>n;
	int k=n;
	while(k)
	{
		k--;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		sum(n);
		cout<<s<<endl;
		s=0;
	}
	return 0;
}
