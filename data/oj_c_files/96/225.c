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
	char num[200];
	int i, count = 0, mod = 0, div[200];
	cin >> num;
	for (i = 0; num[i] != '\0'; i++)
	{
		count++;
		div[i] = (num[i] - 48 + mod) / 13;
		mod = (num[i] - 48 + mod) % 13;
		mod *= 10;
	}
	for (i = 0; i < count; i++)
	{
		if (div[i] != 0)
		{
			for (int j = i; j < count; j++)
			{
				cout << div[j];
			}
			cout << endl << mod / 10 << endl;
			return 0;
		}
		if (i == count - 1)
		{
			cout << 0 << endl;
			cout << mod / 10 << endl;
		}
	}
	return 0;
}