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
	int *p, n, m, num[100], k = 1, t ;
	cin >> n >> m ;
	for (int i = 0 ; i < n ; i ++)
		cin >> num[i] ;
	while (k <= m)
	{
		p = &num[n - 1] ;
		t = *p ;
		for ( ; p > num ; p --)
		{
			*p = *(p - 1) ;
		}
		*p = t ;
		k ++ ;
	}
	for (p = num ; p < num + n - 1 ; p ++)
		cout << *p << " " ;
	cout << *p ;
	return 0 ;
}