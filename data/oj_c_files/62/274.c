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
	char a[10000], leap = 0;
	for (int i = 0; i < 10000; i++)
	{
		cin.get(a[i]);
		if (a[i] != ' ')
		{
			leap = 1;
			cout << a[i];
		}
		if (a[i] == ' ')
		{
			if (leap == 1)
			{
				cout << a[i];
				leap = 0;
			}
		}
		if (a[i] == '\n')
		{
			cout << endl;
			break;
		}
	}
	return 0;
}