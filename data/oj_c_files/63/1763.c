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
//*???????   **
//*?????? 1300012861 **
//*???2013.11.01  **
//********************************
int main()
{
	int a[102][102], b[102][102], c[102][102] = {0}, i, j, k, x1, x2, y1, y2; 
	cin >> x1 >> y1; 
	for ( i = 0; i < x1; i++ ) //???????????
	{
		for ( j = 0; j < y1; j++ )
			cin >> a[i][j]; 
	}
	cin >> x2 >> y2; 
	for ( i = 0; i < x2; i++ ) //???????????
	{
		for ( j = 0; j < y2; j++ )
			cin >> b[i][j]; 
	}
	for ( i = 0; i < x1; i++ )
	{
		for ( j = 0; j < y2; j++ ) //?????????c??
		{
			for ( k = 0; k < y1; k++ )
			{
				c[i][j] += a[i][k] * b[k][j]; //??????????????????????????? ???????
			}
		}
	}
	for ( i = 0; i < x1; i++ ) //????
	{ 
		for ( j = 0; j < y2 - 1; j++ )
			cout << c[i][j] << " "; 
		cout << c[i][j] << endl; 
	}
	return 0;
}

