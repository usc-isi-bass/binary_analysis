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

//******************************
//????1000012825           *
//??????                 *
//???11.28                  *
//???????               *
//******************************
int main ()
{
	char str[500], h[500];
	int i, len, j, k, l = 0, p, q, flag = 0;
	cin.getline( str, 500 );
	len = strlen (str);          //??????????
	for ( i = 2; i <= len ; i++ )
	{
		for ( j = 0; j <= len - i ; j++ ) //????????2?len,????????
		{
			l = 0;
			for ( k = j; k <= j + i - 1; k++ )
			{
				h[l++] = str[k];       //??????????????
			}
			for ( p = 0; p <= i / 2 - 1; p++ ) //?????????????????
			{
				if ( h[p] != h[ i - 1 - p] )
					break;
			}
			if ( p == i /2 )
			{
				for ( q = 0; q <= i - 2; q++ )
					cout << h[q] ;
				cout << h[i - 1] << endl;//?????
			}
		}
	}
	return 0;
}


