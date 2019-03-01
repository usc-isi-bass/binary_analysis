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

char str[256], sub[256];
int f(int x)
{
	int i = x, j = 0;
	while (sub[j] != '\0')
	{
		if (str[i] != sub[j])
			return 0;
		i++; j++;
	}
	return 1;
}
int main()
{
	char rep[256];
	int i = 0, j = 0;
	cin >> str;
	cin >> sub;
	cin >> rep;
	while (str[i] != '\0')
	{
		if (f(i))
		{
			while (rep[j] != '\0')
			{
				str[i] = rep[j];
				i++;
				j++;
			}
			break;
		}
		i++;
	}
	cout << str << endl;
	return 0;
}