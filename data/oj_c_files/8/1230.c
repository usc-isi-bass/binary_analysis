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

void f(int c[],int x)
{
	int p;
	for(int i=0;i<x;i++)
		for(int j=0;j<x-i-1;j++)
		{	
			if(c[j]>c[j+1])
			{
				p=c[j];c[j]=c[j+1];c[j+1]=p;}
		}
}
int main()
{
	int a[100],b[100];
	int m,n,i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
		cin>>a[i];
	for(j=0;j<n;j++)
		cin>>b[j];
	f(a,m);
	f(b,n);
	for(i=0;i<m;i++)
		cout<<a[i]<<' ';
	for(j=0;j<n-1;j++)
		cout<<b[j]<<' ';
	cout<<b[j];
	return 0;
}

