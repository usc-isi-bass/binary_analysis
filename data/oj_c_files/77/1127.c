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

char xiao[101];
int k = 0;
void zhao( int length )                         //????
{
	int i, j, n, m;
	for( i = 1; i < length; i++ )
	{
		if( xiao[i] == ')' )             //??????????
		{
			m = i;
			xiao[i] = '.';
			k = k + 2;
			break;
		}
	}
	for( j = m - 1; j >= 0; j-- )            //??????????????
	{
		if( xiao[j] == '(' )
		{
			n = j;
			xiao[j] = '.';
			break;
		}
	}
	cout << n << " " << m << endl;         //????
	if( k < length )
	{
		zhao( length );
	}
}
int main()
{
	int length;
	int i;
	cin.getline( xiao, 101 );                  //?????
	length = strlen( xiao );
	for( i = 1; i < length; i++ )
	{
		if( xiao[i] == xiao[0] )
		{
			xiao[i] = '(';            //????????
		}
		else
		{
			xiao[i] = ')';
		}
	}
	xiao[0] = '(';
	zhao( length );                         //????
	return 0;
}

