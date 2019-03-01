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
	char str[501];
	int i, j;
	cin >> str;
	for (j = 1; str[j] != '\0'; j++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			for (int l = j, p = 0; l >= 1; p++, l--)
			{
				if (str[i + p] != str[i + l])
				{
					break;
				}
				if (l <= 2)
				{
					for (int k = i; k <= i + j; k++)
					{
						cout << str[k];
					}
					cout << endl;
					break;
				}
			}
		}
	}
	return 0;
}