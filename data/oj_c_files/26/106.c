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
	int i, j, num, a;
	cin.getline (str, 101);
	num = strlen(str);
	for (i = 0; i < num; i++)
	{
		a = 0;
		if (str[i] == '\0')
			break;
		if (str[i] == ' ')
		{
			for (j = i; j < num; j++)
			{
				if (str[j] != ' ')
					break;
				a++;
			}
			for (j = i + 1; j < num; j++)
				str[j] = str[j + a - 1];
		}
	}
	cout << str << endl;
	return 0;
}