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

/*
*8-4
*??? 1200012851
*????
*2012.11.13
**/
int main()
{ 
	char str[500];
	int i, j, m, k, t, len, flag = 1;
	cin.getline(str, 500);
	len = strlen(str);
	for (i = 2; i <= len; i++)
	{
		for (m = 0; m <= len - i; m++)
		{
			flag = 1;
			if (str[m] != str[m + i - 1])
			{
				continue;
			}
			else
			{
				k = m + 1;
				t = m + i - 2;
				while (k < t)
				{
					if (str[k] != str[t])
					{
						flag = 0;
					}
					k++;
					t--;
				}
				if (flag)
				{
					for (j = m; j <= m + i - 1; j++)
					{
						cout << str[j];
					}
					cout << endl;
				}
			}
		}
	}
	return 0;
}
