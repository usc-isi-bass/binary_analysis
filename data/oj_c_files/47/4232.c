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
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)//????
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)//????
	{
		cout<<a[n-1-i]<<' ';
	}
	cout<<a[0];//???????
	return 0;
}