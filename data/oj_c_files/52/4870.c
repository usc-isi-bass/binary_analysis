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

void change ( int * ,int * );
int main()
{   
	int a[999];
	int n,m;
	int i;
	cin >> n >>m;
	for( i=0;i<n;i++)
		cin >> a[i];
	
	change(a,  a+n-1);
	change(a,  a+m-1);
	change(a+m,a+n-1);

	
	for(i=0;i<n;i++)
	{
		if( i==n-1 )
			cout<< a[i]<< endl;
		else
			cout << a[i] << ' ';
	}
	return 0;
}


void change( int  * a,int * b )
{
	int t;
	for(;a<b;a++,b--)
	{
		t=*a;
		*a=*b;
		*b=t;
	}
}