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
	int i,j,n,k,a[100000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i]=-1;
		cin>>a[i];
	}
	cin>>k;
	int count=0;
	for(i=0;i<n-count;i++)
	{
		while(a[i]==k&&i!=n-count-1)
		{
			for(j=i;j<n-1;j++)
			{
				a[j]=a[j+1];
			}
			count++;
		}
		if(a[i]==k&&i==n-count-1)
		{
			count++;
		}
	}
	for(i=0;i<n-count-1;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<a[n-count-1]<<endl;
	return 0;
}

