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

//********************************
//*????5.cpp   **
//*?????? 1300012966 **
//*???2013.11.14  **
//*?????2?N??   **
//********************************
int main()
{
	int N, i, j, a[32] = {1}, b[32];
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		for (j = 0; j < 32; j++)
		{
			b[j] = a[j] * 2;
		}
		a[0] = b[0] % 10;
		for (j = 1; j < 32; j++)
		{
			a[j] = b[j] % 10 + b[j - 1] / 10;
		}
	}
	j = 31;
	while (a[j] == 0)
	{
		j--;
	}
	for (i = j; i >= 0; i--)
	{
		cout << a[i];
	}
	return 0;
}

			
		




