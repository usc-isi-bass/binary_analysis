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
	char str[101];
	int i , j , a[101] , len , count;
	while (cin.getline(str , 101))
	{
		count = 0;
		len = strlen(str);
		for (i = 0 ; i  <= len -1 ; i++)
		{
			cout << str[i];
		}
		cout << endl;
		for (i = 0 ; i <= len - 1 ; i++)
		{
			if (str[i] == ')')
			{
				count++;
				a[count] = i;
			}
		}
		for (i = 1 ; i <= count ; i++)
		{
			for (j = a[i] - 1 ; j >= 0 ; j--)
			{
				if (a[i] == 0)
				{
					str[a[i]] = '?';
				}
				if (str[j] == '(')
				{
					str[j] = ' ';
					str[a[i]] = ' ';
					break;
				}
			}
			if (str[a[i]] != ' ')
			{
				str[a[i]] = '?';
			}
		}
		for (i = 0 ; i <= len -1 ; i++)
		{
			if (str[i] == '(')
			{
				str[i] = '$';
			}
		}
		for (i = 0 ; i <= len -1 ; i++)
		{
			if ((str[i] != ' ')&&(str[i] != '?')&&(str[i] != '$'))
			{
				str[i] = ' ';
			}
		}
		for (i = 0 ; i <= len -1 ; i++)
		{
			cout << str[i];
		}
		cout << endl;
	}
	return 0;
}