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

//****************************
//*???:2.cpp               *
//*??:??                  *
//*????:2013?12?6?     *
//*????:????????   *
//****************************
int a[11][11] = {0};                         //??????a[][]??????,???b????????????
void done ( int m, int n )                   //???done????????a??
{
	int b[11][11] = {0}, i, j;               //??????b[][]???????????????????????
	if ( n == 0 )                            //?????????????
		a[5][5] = m;
	else
	{
		done ( m, n - 1 );                   //??????
		for ( i = 1; i <= 9; i ++ )          //??????a
			for ( j = 1; j <= 9; j ++ )
			{
				if ( a[i][j] != 0 )          //??a[][]????????????????
				{                            //????????????????????????
					for ( int k = i - 1; k <= i + 1; k ++ )
						for ( int t = j - 1; t <= j + 1; t ++ )
							b[k][t] = a[i][j] + b[k][t];
					b[i][j] = b[i][j] + a[i][j];    //???????????????????????
				}
			}
		for ( i = 1; i <= 9; i ++ )          //????????b???????a?????????????
			for ( j = 1; j <= 9; j ++ )
				a[i][j] = b[i][j];
	}
}
int main()                              //???
{
	int m, n, i, j;                     //??????m,????n
	cin >> m >> n;
	done ( m, n );                      //????done???
	for ( i = 1; i <= 9; i ++ )         //???????????????
		for ( j = 1; j <= 9; j ++ )
		{
			if ( j == 9 )
				cout << a[i][j] << endl;
			else
				cout << a[i][j] << " ";
		}
	return 0;
}