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
	char a[10000];
	int i, max = 0, length, len, j, min;
	cin.getline(a, 300);
	len = strlen(a);
	min = 20;
	length = 0;
	for (i = 0; i <= len; i++)
	{
		if (a[i] != ' ' && a[i] != ',' && a[i] != '\0')
			length += 1;
		if (a[i] == ' ' || a[i] == ',' || a[i] == '\0')
		{
			if (length > max)
				max = length;
			if (length < min && length > 0)
				min = length;
			length = 0;
		}
	}
	length = 0;
	for (i = 0; i <= len; i++)
	{
		if (a[i] != ' ' && a[i] != ',' && a[i] != '\0')
			length += 1;
		if (a[i] == ' ' || a[i] == ',' || a[i] == '\0')
		{
			if (length == max)
			{
				for (j = i - max; j != i; j++)
					cout << a[j];
				cout << endl;
				break;
			}
			length = 0;
		}
	}
	length = 0;
	for (i = 0; i <= len; i++)
	{
		if (a[i] != ' ' && a[i] != ',' && a[i] != '\0')
			length += 1;
		if (a[i] == ' ' || a[i] == ',' || a[i] == '\0')
		{
			if (length == min)
			{
				for (j = i - min; j != i; j++)
					cout << a[j];
				cout << endl;
				break;
			}
			length = 0;
		}
	}

	return 0;
}

