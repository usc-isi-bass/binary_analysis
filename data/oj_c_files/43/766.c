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

//*************************************
//* ????1.cpp *
//* ??????1200012844 *
//* ?????2012?10?23? *
//* ??????????? *
//**************************************

int main()
{
	int m, x, y, i, j, l, k;//????m?m???????x?y???i?j??????l?k
	cin >> m;//??????m
	for( x = 3; x <= m / 2; x += 2 )//??????3??????????????
	{
		//l = (int) sqrt(x);
		for ( i = 2; i < x ; i++ )//???2?????????
			if ((x % i) == 0) break;//?????????
			if ( i == x )//??x??????y?????
			{
				y = m - x;
				//k = (int) sqrt(y);
				for( j = 2; j < y ; j++ )//???2?????????
					if ((y % j) == 0) break;//?????????
					if ( j == y )//??y???????x y
						cout << x << ' ' << y << endl;
			}
	}
	return 0;
}