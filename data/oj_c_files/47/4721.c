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

int a[100001];
void swap(int n,int m)
{
	int t=a[n];
	a[n]=a[m];
	a[m]=t;
}
int main()
{
	int m,n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1,j=n;i<=j;i++,j--)
	swap(i,j);
	for(i=1;i<n;i++)
	cout<<a[i]<<' ';
	cout<<a[n];
	return 0;
}
