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
	char n;
	int p[6], i = 0, j = 0, k = 0;
	while( ( n =cin.get() ) != '\n' )
	{
		k = n - '0';
		p[i] = k;
		i++;
	}
	for ( j = ( i - 1 ); j >= 0; j = j - 1 )
	{
		cout << p[j];
	}
	return 0;
}

