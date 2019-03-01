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
	int desk[5][5], n, m, temp;
	for( int i = 0; i < 5; i ++ )
		for( int j = 0; j < 5; j ++ )
			cin >> desk[i][j];
	cin >> n >> m;
	if( n >= 0 && n < 5 && m > 0 && m < 5 )
	{
		for( int i = 0; i < 5; i ++ )
		{
			temp = desk[n][i];
			desk[n][i] = desk[m][i];
			desk[m][i] = temp;
		}
		for( int i = 0; i < 5; i ++ )
		{
			for( int j = 0; j < 5; j ++ )
			{
				if( j ) cout << ' ';
				cout << desk[i][j];
			}
			cout << endl;
		}
	}
	else cout << "error" << endl;
	return 0;
}
