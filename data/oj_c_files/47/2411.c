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
	int i,j,n,a[100],b[100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		b[n-i+1]=a[i];
	}
	for(j=1;j<n;j++)
	{
		cout<<b[j]<<" ";
	}
	cout<<b[j]<<endl;
	return 0;
}