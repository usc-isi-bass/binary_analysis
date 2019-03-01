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
	int m,n,a[10000],i=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	i=n-m;
	for(i=n-m;i<n;i++)
	{
			cout<<a[i]<<" ";
	}
	i=0;
	for(i=0;i<n-m-1;i++)
	{
		cout<<a[i]<<" ";
	}
	if(i=n-m-1)
		cout<<a[i];
	return 0;
}
