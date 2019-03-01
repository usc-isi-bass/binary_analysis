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
	int n,a[1000],odd=0,t;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t%2)
		{
			a[odd]=t;
			odd++;
		}
	}
	for(int i=0;i<odd-1;i++)
		for(int j=0;j<(odd-i-1);j++)
			if(a[j]>a[j+1])
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
	for(int i=0;i<odd-1;i++)
		cout<<a[i]<<',';
	cout<<a[odd-1];
	return 0;
}