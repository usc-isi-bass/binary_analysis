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



int function( int x , int y );
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<function( x , y )<<endl;
}


int function( int x , int y )
{
	if( x==y )
	{
		return ( x );
	}
	else if( x > y )
	{
		if( x%2==0 )
		{
			return( function( x/2 , y ) );
		}
		else
		{
			return( function( (x-1)/2 , y ) );
		}
	}
	else
	{
		if( y%2==0 )
		{
			return( function( x , y/2 ) );
		}
		else
		{
			return( function( x , (y-1)/2 ) );
		}
	}
}