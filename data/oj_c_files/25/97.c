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

//**********************************
//????1000012825               *
//??????                     *
//???12.15                      *
//?????2?N??               *
//**********************************
int main ()
{
	int n, i ,j, a[101] = {0}, k;
	cin >> n;
	a[0] = 1;
	for ( i = 1; i <= n; i++ )
	{
		for ( j = 0; j <= 100; j++ )
			a[j] = a[j] * 2;      //????????
		for ( j = 0; j <= 100; j++ )
		{
			if ( a[j] >= 10 )
			{
				a[j] = a[j] % 10;
				a[ j + 1 ]++;         //?????????????????????
			}
		}
	}
	for ( i = 100; a[i] == 0; i-- )
		k = i;
	for ( j = k - 1 ;j >= 0; j-- )   //?????0???????
		cout << a[j];
	cout << endl;
	return 0;
}
