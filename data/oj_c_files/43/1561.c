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
	int n, s;
	cin >> n;
	for (int i = 3; i <= n / 2; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && j != i)
			{
				break;
			}
			if (j == i)
			{
				s = n - i;
				for (int k = 2; k <= s; k++)
				{
					if (s % k == 0 && s != k)
					{
						break;
					}
					if (s == k)
					{
						cout << i << ' ' << s << endl;
					}
				}
			}
		}
	}
return 0;
}