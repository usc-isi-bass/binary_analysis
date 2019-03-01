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
	int n = 0;										//????n
	int x = 0;										//?????
	cin >> n;
	int y = 0;										//????
	for (;;)
	{
		if ( n == 1 ) 
		{
			cout << "End";
			break;
		}
		else
		{
			y = n % 2;
			if ( y == 1 ) 
			{
				x = n * 3 + 1;
				cout << n << "*3+1=" << x << endl;
			}
			else
			{
				x = n / 2;
				cout << n << "/2=" << x << endl;
			}
			n = x;
		}
	}
	return 0;
}