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


int n ;
int i , j;
int in[ 10000] = { 0 } ;
int out[ 10000 ] = { 0 };



int main()
{
	int h ;
	cin>>n ;
	while( cin>>i>>j )
	{
		if( i == 0 && j == 0 )
			break;

		in[ i ] = 1 ;
		out[ j ] = 1 ;
	}

	for( h = 0 ; h < n ; h++ )
	{
		if( in [ h ] == 1 )
		{
			out[ h ] = 0 ;
		}
	}

	int count = 0 ;

	for( h = 0 ; h < n ; h++ )
	{
		if( out[ h ] == 1 )
		{
			cout<<h<<endl ;
			count = 1 ;
		}
	}


	if( count == 0 )
	{
		cout<<"NOT FOUND"<<endl;
	}


	return 0 ;
	
	
}

