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
    int i, n, sum, sum1;

	sum = sum1 = 0;

	cin >> n;

	for ( i = 1; i <= n; i++)
	{
		if ( i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
			
			sum = sum + i * i;
		
		else 
			
			sum = sum;

		sum1 = sum1 + i * i;
	}

		sum = sum1 - sum;

		cout << sum << endl;

		return 0;
}