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
	int a[101],b[101],n,i,m;
	cin>>n>>m;
	for(i=1;i<=n;i++)//????
	{cin>>a[i];}
	for(i=n-m+1;i<=n;i++)//???????
	{b[i-n+m]=a[i];}
	for(i=n-m;i>=1;i--)//??????
	{a[m+i]=a[i];}
	for(i=1;i<=m;i++)//???m???
	{a[i]=b[i];}
	for(i=1;i<n;i++)//????
	{cout<<a[i]<<" ";}
	cout<<a[n];
	return 0;
}
