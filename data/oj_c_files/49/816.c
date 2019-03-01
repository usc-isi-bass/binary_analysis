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
	int k = 2, i = 0, j = 0;
	char str[500];
	cin >> str;
	int len = strlen(str);
	int p = 0;
	for (k = 2; k <= len; k++)
		for (i = 0; i <= len - k; i++)
		{
			p = 0;
			for (j = i; j < i + k / 2; j++)
			{
				if (str[j] != str[2 * i + k - 1 - j])
					break;
				else 
					p++;
				if (p == k / 2)
				{
					for (int t = i; t <= i + k - 1; t++)
						cout << str[t];
					cout << endl;
				}
			}
		}

			return 0;
}
