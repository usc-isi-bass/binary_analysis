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

/*
 * ???? .cpp
 *
 *  Created on: 2012-11-27
 *      Author:??
 *      ???????a?????????????????a = a1 * a2 * a3 * ... * an?
 *      ??1 < a1 <= a2 <= a3 <= ... <= an?????????????????a = a???????
 */

int answer = 0;//???????
void f(int n, int N) {
	if (n < N)
		N = n;//????????????
	if (N == 1) {
		answer++;//??????
		return;
	}
	while (N > 1) {
		if (n % N == 0)
			f(n / N, N);//?????,?????
		N--;//??????
	}
}

int main()
{
	int n , a ;
	cin >>  n ;        //????n
	for ( int i = 0 ; i < n ; i++ )
	{
		cin >> a ;
		f( a , a ) ;              //????
		cout << answer << endl ;
		answer = 0 ;                   //????
	}
	return 0 ;
}
