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
	int n,a[500],i,j,b[500];
	cin >>n;
	for(i=0;i<n;i++)
		cin >>a[i];
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
	n=j;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				a[0]=b[j];
				b[j]=b[j+1];
				b[j+1]=a[0];
			}
		}
	for(j=0;j<n;j++)
	{
		if(j==0)
			cout<<b[j];
		else
			cout<<","<<b[j];
	}
	return 0;
}

