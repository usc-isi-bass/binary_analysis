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
	int n,a[101];
	cin>>n;
	int i;
	for (i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (i=n;i>=2;i--)
	{
		cout<<a[i]<<' ';
	}
	cout<<a[1];



}
		

