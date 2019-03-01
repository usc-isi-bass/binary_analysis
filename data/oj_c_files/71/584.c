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
	int year, month1, month2;
	for (int i= 1; i <= n; i++)
	{
		cin >> year >> month1 >> month2;
		int difference = month1 - month2;
		if (difference > 0)
		{
			month1 -= difference;
			month2 += difference;
		}
		int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
		if (((!(year % 4)) && (year % 100)) || !(year % 400))
			m[2] = 29;
		int d = 0;
		for (int j = month1; j < month2; j++)
			d += m[j];
		if (d % 7)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}