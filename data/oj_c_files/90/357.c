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

int k=0;
int apple( int m, int n );
int main()
{
	int t,i,M[20],N[20];
	cin>>t;
	for ( i=0 ; i<t ; i++ )
	{
		cin>>M[i]>>N[i];
		cout<<apple( M[i],N[i] )<<endl;
	}
	return 0;
}
int apple( int m, int n )
{
	if ( n==1||n==0 )
	{
		return 1;
	}
	if ( m>=n )
	{
		return apple( m,n-1 )+apple( m-n,n );
	}
	if ( m<n )
	{
		return apple( m,n-1 );
	}
	
}