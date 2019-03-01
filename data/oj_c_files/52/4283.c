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
	int a[200]={0},n,m,i;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=n-1;i>=0;i--)
	{
		a[i+m]=a[i];
	}
	for(i=n;i<n+m;i++)
	{
		a[i-n]=a[i];
	}
	cout<<a[0];
	for(i=1;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<endl;
	return 0;
}