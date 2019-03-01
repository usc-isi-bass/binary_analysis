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
	char c[500];
	int i, j, k, len, flag;
	cin.getline(c,500);
	len = strlen(c);
	for (i = 2; i <= len; i++)
	{
		for (j = 0; j <= len - i; j++)
		{
			flag = 1;
			for (k = 0; k < (i + 1) / 2; k++)
			{
				if (c[j + k] != c[j + i - 1 - k])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				for (k = 0; k < i; k++)
					cout << c[j + k];
				cout << endl;
			}
		}
	}
	return 0;
}