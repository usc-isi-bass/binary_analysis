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
	int n=0;
	int h[25];
	cin>>n;
	int i=0;
	for(i=n-1;i>=0;i--)
	{
		cin>>h[i];
	}
	int d[25];
	d[0]=1;
	int j=0;
	int max=0;
	for(i=1;i<n;i++)
	{
		max=0;
		for(j=0;j<i;j++)
		{
			if(max<d[j]&&h[i]>=h[j])
			{
				max=d[j];
			}
		}
		d[i]=max+1;
	}
	max=0;
	for(i=0;i<n;i++)
	{
		if(d[i]>max)
			max=d[i];
	}
	cout<<max<<endl;
	return 0;
}