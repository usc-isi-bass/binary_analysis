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
	int n, m, flag = 0;
	cin >> n;
	while (flag == 0)
	{
		if (n == 1)
		{
			cout << "End";
			flag = 1;
		}
		else if (n % 2 != 0 && n != 1)
		{
			m = n;
			n = n * 3 + 1;
			cout << m << '*' << 3 << '+' << 1 << '=' << n << endl;	
		}
		if (n % 2 == 0)
		{
			m = n;
			n = n / 2;
			cout << m << '/' << 2 << '=' << n << endl;
			if (n == 1)
			{
				cout << "End";
				flag = 1;
			}
			else
				flag = 0;
		}
	}
	return 0;
}
