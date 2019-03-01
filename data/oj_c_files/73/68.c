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

int max(int array[][5],int n,int i)
{
	int j,m;
	m=array[i][0];
	for(j=0;j<n;j++)
	m=m>array[i][j]?m:array[i][j];
	return m;
}
int min(int array[][5],int n,int j)
{
	int i,m;
	m=array[0][j];
	for(i=0;i<n;i++)
	m=m<array[i][j]?m:array[i][j];
	return m;
}	
	
int main()
{
	int a[5][5];
	int i,j,k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		cin>>a[i][j];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==max(a,5,i)&&a[i][j]==min(a,5,j))
			{
				cout<<i+1<<" "<<j+1<<" "<<a[i][j]<<endl;
				k++;
			}
		}
	}
	if(k==0)
	cout<<"not found";
	return 0;
}	