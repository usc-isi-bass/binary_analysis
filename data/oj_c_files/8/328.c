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
	int m=0,n=0,i=0,j=0,a[100],b[100],temp=0;
	cin>>m>>n;
	for(i=0;i<m;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<m-1;i++)
		for(j=i+1;j<m;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	for(i=0;i<m;i++)
		cout<<a[i]<<" ";
	for(i=0;i<n-1;i++)
		cout<<b[i]<<" ";
	cout<<b[n-1];
	return 0;
}