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
	int n;
	cin >> n;
	int testnum, successnum;
	float x = 0, y = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> testnum >> successnum;
		if (i == 1)
		{
			x = 100.0 * successnum / testnum;
		}
		if (i >= 2)
		{
			y = 100.0 * successnum / testnum;
			if ((int)(y - x) >= 5)
			{
				cout << "better" << endl;
			}
			else if ((int)(x - y) >= 5)
			{
				cout << "worse" << endl;
			}
			else
			{
				cout << "same" << endl;
			}
		}
		y = 0;
	}

	return 0;
}