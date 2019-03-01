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


int seven(int n)
{
	int i, s= 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 10 != 7 && i / 10 != 7 && i % 7 != 0)
		{
			s += i * i;
		}
	}
	return s;
}

int main()
{
	int n;
	cin >> n;
	cout << seven(n) << endl;
	return 0;
}
