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
	int n;
	int a[91];
	int i;
	for( i=0 ; i<91 ; i++ )
	{
		a[i]=0;
	}
	cin>>n;
	cin>>i;
	cout<<i;
	a[i-10]=1;
	while( n>0 )
	{
		n--;
		int b;
		cin>>b;
		if( a[b-10]==0 )
		{
			cout<<' '<<b;
			a[b-10]=1;
		}
	}
}