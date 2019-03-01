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

//****************************************
//*??: ????????               **
//*?????? 1100013012              **
//*???2011.10.21                     **
//****************************************
int main()
{
	int k , n;                                             // ????k???????  n??????? 
	int a[100000];                                         // ????a
	int i , j;                                             // ??????i j
	cin >> n;                                              // ??n
	for ( i = 0; i < n; i++ )                              // ????????????
	{
		cin >> a[i];
	}
	cin >> k;                                              // ??k
	for ( i = 0; i < n; i++ )                              // ????????????????
	{
		if ( a[i] == k )                                   // ????
		{
			for ( j = i ; j < n; j++ )                     // ????k???????????
			{
				a[j] = a[j+1];                             // ???????????
			}
		n--; i--;                                          // ????????i-1??????????????
		}
	}
	for ( i = 0; i < n; i++ )                              // ????????
	{
		cout << a[i];                                      
		if ( i != n-1 ) cout << " ";                       // ???????
	}
	return 0;
}
