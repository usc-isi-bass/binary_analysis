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

int days(int x, int y, int z)
{
	int sum = 0;
	int leap = (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0);
	for (int i = 1; i < y; i ++)
	{
		if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			sum += 30;
		}
		else if (i == 2)
		{
			sum += (leap + 28);
		}
		else
		{
			sum += 31;
		}
	}
	sum += z;
	return sum;
}
int main()
{
	int x, y, a, z, b, c, sum = 0;
	cin >> x >> y >> z >> a >> b >> c;
	for (int i = x; i < a; i ++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}

	}
	sum = sum + days(a, b, c) - days(x, y, z);
	cout << sum << endl;
	return 0;
}