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
	char a[501];
	int b[500] = {0};
	cin >> a;
	int i, j = 0, k = 0;
	for (k = 2; k <= (int)strlen(a); k += 2)
	{
		for (i = 0; i < (int)strlen(a) + 1 - k; i++)
		{
			if ((a[i] == a[i+k-1])&&(b[i+1] == 0))
			{
				for (j = i; j<= i + k - 1; j++)
				{
					cout << a[j];
				}
				b[i] = 0;
				cout << endl;
			}
			else
			{
				b[i] = 1;
			}
		}
	}
	return 0;
}