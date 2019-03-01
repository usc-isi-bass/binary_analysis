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

int main ()
{
	int n, t, i, j, m;
	cin >> n;
	int a[20000] = {0}; // ????
	cin >> t;
	cout << t;
	m = 1;         //m??????????
	a[0] = t;        //??????????
	for (i = 2; i <= n; i++)
	{
		cin >> t;
		for ( j = 0; j < m; j ++)  
		{
			if ( a[j] == t)    // ????????
				break;
		}
		if ( j >= m ) // ????????????
		{
			cout << ' ' << t;
			a[m] = t;
			m ++;
		}
	}
	return 0;
}
