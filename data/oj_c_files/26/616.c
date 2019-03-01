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
	char str[100], t;
	int i, count = 0;
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' || str[i - 1] != ' ')
		{
			count++;
		}
	}
	for (i = 0; i < count; i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i + 1; str[j + 1] != '\0'; j++)
			{
				t = str[j];
				str[j] = str[j + 1];
				str[j + 1] = t;
			}
			if (str[i + 1] == ' ')
			{
				i--;
			}
		}
	}
	for (i = 0; i < count; i++)
	{
		cout << str[i];
	}
	cout << endl;
	return 0;
}