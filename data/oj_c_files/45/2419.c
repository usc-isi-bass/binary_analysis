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
	char s[50] , w[50] ;
	int i , j ;
	int flag = 0 ;
	cin >> s >> w ;
	int len = strlen(w) ;
	int lenS = strlen(s) ;
	for ( i = 0 ; i < len ; i++ )
	{
		if ( s[0] == w[i] )
		{
			for ( j = 0 ; j < lenS ; j++ )
			{
				if ( s[j] != w[i+j] ) 
				{
					break ;
				}
			}
			if ( j == lenS )
			{
				cout << i ;
				return 0 ;
			}
			else
				continue ;
		}
	}
	return 0 ;
}