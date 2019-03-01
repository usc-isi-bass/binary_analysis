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
	int n=0,i=0,m=0,s=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	if(n%2==1)m=n/2+1;
	if(n%2==0)m=n/2;
	for(i=0;i<m;i++)
	{
		s=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=s;
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)cout<<a[i]<<' ';
		if(i==n-1)cout<<a[i];
	}
	cout<<endl;
	return 0;
}
