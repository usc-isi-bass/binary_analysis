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

int a[100],b[100];
int m,n,i,j;
void temp()
{
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
}
void temp1()
{
	int x;
	for(i=0;i<m-1;i++)
	{
	for(j=0;j<m-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			x=a[j];
			a[j]=a[j+1];
			a[j+1]=x;
		}
	}
	}
}
void temp2()
{
	int x;
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
		if(b[j]>b[j+1])
		{
			x=b[j];
			b[j]=b[j+1];
			b[j+1]=x;
		}
	}
	}
}
void temp3()
{
	for(i=0;i<m;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<n-1;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<b[n-1];
}
int main()
{
	temp();
	temp1();
	temp2();
	temp3();
	return 0;
}


