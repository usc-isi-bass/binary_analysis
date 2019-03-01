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
	int w, i, sum, month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> w;
	sum = 13 + w;
	for (i = 0; i <= 11; i++)
	{
		sum += month[i];
		if (sum % 7 == 6)
		{
		    cout << i + 1 << endl;
		}
	}
	return 0;
}