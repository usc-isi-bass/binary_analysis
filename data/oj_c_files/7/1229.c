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
	char str[300], subStr[10], re[10];
	int i, j, lenth, m, n;
	int flag = 0;
	cin >> str >> subStr >> re;
	lenth = strlen(str);
	n = strlen(subStr);
	m = strlen(re);
	for (i = 0; i < lenth; i++)
	{
		j = 0;
		if (str[i] == subStr[j])
		{
			for (j = 0; j < n; j++)
			{
				if (str[i] == subStr[j])
					i++;
				else
					break;
			}
		}
		if (j == n)
		{
			flag = 1;
			for ( ; j > 0; i--, j--)
			{
				str[i - 1] = re[j - 1];
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	cout << str;
	return 0;
}
	



