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

//???2010?11?24?
//???1000010586_???
//???????

int main()
{
	int len , i , j , k , l;
	char word[500];
	cin >> word;
	len = strlen( word );
	for ( i = 1 ; i <= len / 2 ; i ++ )
	{
		for ( j = 0 ; j <= len - i ; j ++ )
		{
			for ( k = 0 ; k <= i - 1 ; k ++ )
			{
				if ( word[j + k] != word[j + 2 * i - 1 - k] )
					break;
			}
			if ( k == i )
			{
				for ( l = 0 ; l <= 2 * i - 1 ; l ++ )
					cout << word[j + l];
				cout << endl;
			}
		}
	}
	return 0;
}