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
	int a[7][7], i, j, max, l, k, count, s, t;
	count = 0; 
	for ( i = 0; i < 5; i++ ) //??????????
	{
		for ( j = 0; j < 5; j++ )
		{
			cin >> a[i][j]; 
		}
	}
	for ( i = 0; i < 5; i++ ) //
	{
		max = a[i][0]; //???????????
		k = 0; 
		for ( j = 1; j < 5; j++ ) //????
		{
			if ( a[i][j] > max ) //????????
			{
				max = a[i][j]; //?????
				k = j; //????????
			} 
		}
		for ( l = 0; l < 5; l++ ) //?????????
		{
			if ( a[i][k] > a[l][k] ) //????????
				break; //????
		} 
		if ( l == 5 ) //???????
		{
			count++; //??????
			s = i + 1; //????
			t = k + 1; //????
		} 
	}
	if ( count != 0 ) //?????
		cout << s << " " << t << " " << a[s - 1][t - 1] << endl;
	else
		cout << "not found" << endl;
	return 0;
}

