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
	int a, b, c, i;
	char str[3];
	for( a = 0; a < 3; a++ )
	{
		for( b = 0; b < 3; b++ )
		{
			for( c = 0; c < 3; c++ )
			{
				if( (b > a) + (c == a) + a == 2 &&
					(a > b) + (a > c) + b == 2 &&
					(c > b) + (b > a) + c == 2 &&
					a != b && a != c && b != c )
				{
					str[a] = 'A';
					str[b] = 'B';
					str[c] = 'C';
					for( i = 0; i < 3; i++ )
					{
						cout << str[i];
					}
				}
			}
		}
	}
	cout << endl;
	return 0;
}
