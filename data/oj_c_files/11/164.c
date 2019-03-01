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
	int y = 0, m = 0, d = 0;
    scanf ("%d %d %d", &y, &m, &d);
	int days = 0;
	int i;
	if (y % 4 == 0)
	{
		int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		for (i = 1; i < m; i++)
		{
			days = month[i] + days;
		}
		days = d + days;
	}
	else
	{
		int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		for (i = 1; i < m; i++)
		{
			days = month[i] + days;
		}
		days = d + days;
	}
	printf ("%d\n", days);
	return 0;
}