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
	int a[100] = {0};
	int n,temp;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int j=0;j<n/2;j++)
	{
		temp = a[j];
		a[j] = a[n-1-j];
		a[n-1-j] = temp;
	}
	for (int i=0;i<n;i++)
	{
		if (i==n-1)
		{
			cout<<a[i]<<endl;
		}
		else
		{
			cout<<a[i]<<' ';
		}
	}
	cout<<endl;
	return 0;
}