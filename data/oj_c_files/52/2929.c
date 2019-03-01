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
	int n,m,a[200],i;
	cin>>n>>m;
	for(i=100;i<n+100;i++)
	{
	  cin>>a[i];
	}
    for(i=n-m+100;i<n+100;i++)
	{
		a[i-n]=a[i];
	}
	for(i=100-m;i<n+100-m-1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n+100-m-1]<<endl;
	return 0;
}


