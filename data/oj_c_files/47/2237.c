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
	int a[110],*p,n,*i,*j;
	cin>>n;
	for(i=a;i<a+n;i++)
	{
		cin>>*i;
	}
	for(j=a+n-1;j>a;j--)
	{
		cout<<*j<<' ';
	}
	cout<<*a;
	
	return 0;
}