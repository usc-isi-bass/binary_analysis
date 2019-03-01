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
	int n, t;
	cin >> n;
	int i;
	while (n--)
	{
		int a = 1, b = 1, c;
		cin >> t;
		for (i = 0;i < t-1;i++)
		{
			c = a + b;
			a = b;
			b = c;
		}

		cout << a << endl;
	}
	return 0;
}