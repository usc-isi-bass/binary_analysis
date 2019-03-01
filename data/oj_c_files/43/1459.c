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
	int m, i ;
	cin >> m ;
	for (i = 3 ; i < ((m / 2) + 1) ; i += 2)
	{
		for (int j = 3 ; j <= m - i ; j += 2)
		{
			if ((i % j == 0)||((m - i) % j == 0))
			{
				if (j != i)
				break ;
			}
			if (j >= (m - i - 2))
			{
				cout << i << " " << m - i << endl ;
				break ;
			}
		}
	}
	
	return 0 ;
}