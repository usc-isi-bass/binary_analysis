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
	int a[300];
	int n,m,i,j;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	j=0;
	for(i=n;i<2*n-m;i++)
	{
	  	a[i]=a[j];
     	j++;
	}
	for(i=n-m;i<2*n-m-1;i++)
		cout<<a[i]<<' ';
	cout<<a[2*n-m-1];
	return 0;
}
