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

//*????1000012912_004.cpp
//*??????
//*?????2010.10.27
//*??????????
int main()
{
	int n, i, j, k, m, a[20000];               //????
	cin >> n;                                  //?????
	for ( i = 0; i < n; i ++ )                 //???????
		cin >> a[i];
	for ( j = 0; j < n; j ++ )              
	{
		for ( k = j + 1; k < n; k ++ ) 
		{
			if ( a[j] == a[k] )             //??j+1????k+1????
			{
				for ( m = k + 1; m < n; m ++ )     //?????????
					a[m - 1] = a [m];
				n -= 1;                          //?????
				k -= 1;
			}
		}
	}
	for ( i = 0; i < n - 1; i ++ )
		cout << a[i] <<" ";
	cout << a[n-1];                               //????????
	return 0;
}