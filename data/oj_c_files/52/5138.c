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
	int n,m;
	cin>>n>>m;
	int a[n];
	for( int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int *p = a + n - m;
	for( ; p < a + n ; p++)
	{
		cout<< *p<<' ';
	}
	int *q = a;
	for(; q < a + n - m ; q++)
	{
		if( q != a + n - m - 1)
			cout<< *q << ' ';
		else
			cout<< *q<<endl;
	}
	
	
	return 0;
}
	
	
