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
	char str[505];
	int i, j, m, length, a[255][505] = {0}, flag = 0;
	cin.getline (str, 500);
	length = strlen(str);
	for (i = 0; i < length - 1; i++)
	{
		if (str[i] == str[i + 1])
		{
			a[0][i] = 1;
			j = 1;
			while (i + j + 1 < length && i - j >= 0)
			{
				if (str[i - j] == str[i + j + 1])
				{
					a[j][i] = 1;
					j++;
				}
				else
					break;
			}
		}
	}
	for (i = 0; i < length / 2; i++)
		for (j = 0; j <length - 1; j++)
		{
			if (a[i][j] == 1)
			{
				flag = 1;
				for (m = j - i; m <= j + 1 + i; m++)
					cout << str[m];
			}
			if (flag == 1)
			{
				cout << endl;
				flag = 0;
			}
		}
	return 0;
}