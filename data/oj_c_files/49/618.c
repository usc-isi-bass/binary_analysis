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
	char str[500];
	int i, j, k, s, length;
	cin.getline(str,500);
	length = strlen(str);
	for (i = 2; i <= length; i++)
	{
		for (j = 0; j <= length - i; j++)
		{
			for (k = j; k < j + i/2; k++)
			{
				if (str[k] != str[2 * j + i - k - 1])
				{
					break;
				}
			}
			if (k == j + i/2)
			{
				for (s = j; s < j + i; s++)
					cout << str[s];
				cout << endl;
			}
		}
	}
	return 0;
}