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
	int n=0,a[101],i=0,j=0,k=0;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
    for(i=1;i<=n-1;i++)
		cout<<a[n+1-i]<<' ';
	cout<<a[1];
	return 0;
}