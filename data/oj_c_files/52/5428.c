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
	int n,m,i,j,a[101],t;
	{
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<m;i++)
		{
			t=a[n-m+i];
			for(j=n-m-1+i;j>i-1;j--)
			{
				a[j+1]=a[j];
			}
			a[i]=t;
		}
		for(i=0;i<n;i++)
		{
			if(i!=n-1)
			{
			   cout<<a[i]<<" ";
			}
			else
			{
				cout<<a[i];
			}
		}
	}
	return 0;
}