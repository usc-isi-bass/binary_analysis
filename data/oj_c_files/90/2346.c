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
	int sort(int M , int N) ;
	int n , M , N , k ;
	cin >> n ;
	int i = 1 ;
	do
	{
		cin >> M >> N ;
		k = sort(M , N) ;
		cout << k << endl ;
		i++ ;
	}while (i <= n) ;
	return 0 ;
}
int sort(int M , int N)
{
	if (M <= 1 || N == 1)
		return 1 ;
	else
	{
		if (M < N)
			return sort(M , M) ;
		else
			return ( sort(M - N , N) + sort(M , N - 1) ) ;
	}
}