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
	int i,j,k,l,m;
	int t = 1;
	cin >> str;
	i = strlen (str);
	for (j = 1;j <= i - 1;j++)
	{
		for (k = 0;k <= i - j - 1;k++)
		{
			if (j % 2 != 0)
			{
				for (l = 0;l <= (j - 1) / 2;l++)
				{
					if (str[k + l] != str[k + j - l])
					{
						t = 0;
						break;
					}
				}
			}
			else
			{
				for (l = 0;l <= (j / 2) - 1;l++)
				{
					if (str[k + l] != str[k + j - l])
					{
						t = 0;
						break;
					}
				}
			}
			if (t == 1)
			{
				for (m = k;m <= k + j;m++)
				{
					cout << str[m];
				}
				cout << endl;
			}
			t = 1;
		}
	}
	return 0;
}