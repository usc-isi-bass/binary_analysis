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
	int depart (int number, int y);
	
	int i, n, number;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> number;
		cout << depart (number, 2) << endl;
	}
	
	return 0;
}

int depart (int number, int y)
{
	int count = 1, a, i;
	if (number == 1)
		return 0;
	if (number == 2)
		return 1;
	else 
	a = sqrt( number);
	for (i = y; i <= a; i++)
		if (number % i == 0)
			count += depart (number / i, i);
	return count;
}

