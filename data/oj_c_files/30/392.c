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
	int n, sum = 0, i = 1;
	cin >> n;
	while (i <= n)
	{
		int a = i%10, b = i - a;
		if (i%7 == 0) i++;
		else 
		{
			if (a == 7) i++;
		         else 
			{
				if (b == 70) i++;
		                  else sum = sum + i * i;
				         i++;
			}
		}
	}
	cout << sum << endl;
	return 0;
}