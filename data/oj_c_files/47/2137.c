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
	int n,i,a[100],b[100];
	cin>>n;
	for(i=0;i<=n-1;i++)
	cin>>a[i];
	for(i=0;i<=n-1;i++)
	b[i]=a[n-1-i];
	for(i=0;i<=n-2;i++)
	{cout<<b[i]<<" ";}
	cout<<b[n-1];
	return 0;
}