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
	int alpha[52] = { 0 } ;
	int alphb[52] = { 0 } ;
	char a[100] , b[100] ;
	cin >> a >> b ;
	int lenA = strlen(a) ;
	int lenB = strlen(b) ;
	int i , j ;
	for ( i = 0 , j = 0 ; i < lenA , j < lenB ; i++ , j++ )
	{
		if ( a[i] >= 'a' && a[i] <= 'z' )
		{
			alpha[a[i] - 'a']++ ;
		}
		else if ( a[i] >= 'A' && a[i] <= 'Z' )
		{
			alpha[a[i] - 'A']++ ;
		}
		if ( b[i] >= 'a' && b[i] <= 'z' )
		{
			alphb[b[i] - 'a']++ ;
		}
		else if ( b[i] >= 'A' && b[i] <= 'Z' )
		{
			alphb[b[i] - 'A']++ ;
		}
	}
	for ( i = 0 ; i < 52 ; i++ )
	{
		if ( alpha[i] != alphb[i] )
			break ;
	}
	if ( i < 52 )
	{
		cout << "NO" << endl ;
	}
	else
		cout << "YES" << endl ;
	return 0 ;
}