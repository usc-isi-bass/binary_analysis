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
	int a[100],n,m,i,b[100];
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-m;i++)
		b[m+i]=a[i];
	for(i=n-m;i<n;i++)
		b[i-n+m]=a[i];
	for(i=0;i<n;i++)
	{
		if(i==n-1)
			cout<<b[i]<<endl;
		else
		cout<<b[i]<<" ";
	}
	return 0;
}
	