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

//********************************
//*???*????*
//*?????? 1300012811 **
//*???2013.12.13 **
//********************************
int main ()
{
	int n ;
	char str[10001][40];
	cin >> n ;cin.get();
	for ( int i = 1 ; i <= n ; i++ )
	{
		cin.getline(str[i],40,' ');
	} 
	int sum = 0 ;
	for ( int i = 1 ;i <= n ; i ++ )
	{
		sum += strlen(str[i]);
		if ( sum <= 80 )
		{
			if ( sum != strlen(str[i]) )
			{				
				cout << " " ;
			}
			for ( int j = 0 ; j < strlen(str[i]); j ++ )
			{
				cout << *(str[i]+j);
			}
			sum ++ ;			
		}
		else
		{
			cout << endl ;
			sum = 0 ;
			i -- ;
		}
	}
	return 0 ;
}