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
	int len, i, j;
	char str[101], ans[100] = {'0'}, a, b;
	cin >> str;
	len = strlen(str);
	a = str[0];
	b = str[1];
	for (i = 0; i < len - 1; )
	{
		if (str[i] > '1')
		{
			if (str[i + 1] >= '3')
			{
				str[i]--;
				str[i + 1]-=3;
			}
			else
			{
				str[i]-=2;
				str[i + 1]+=7;
			}
			ans[i]++;
		}
		if (str[i] == '1')
		{
			if (str[i + 1] >= '3')
			{
				str[i]--;
				str[i + 1]-=3;
				ans[i]++;
			}
			else
			{
				str[i + 1]+=10;
				i++;
				ans[i] = '0';
			}
		}
		if (str[i] == '0')
		{
			i++;
			ans[i] = '0';
		}
	}
	if (len == 1 || (len == 2 && a == '1' && b < '3'))
	{
		cout << "0";
	}
	else if (a == '1' && b < '3')
	{
		for (j = 1; j < i; j++)
		{
			cout << ans[j];
		}
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			cout << ans[j];
		}
	}
	cout << endl;
	if (str[i - 1] == '1')
	{
		str[i]-=10;
		cout << str[i - 1] << str[i] << endl;
	}
	else
	{
		cout << str[i] << endl;
	}
	return 0;
}