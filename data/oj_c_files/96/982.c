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
	int i, d, c = 0, flag = 1;
	char a[100], b[100];
	cin.getline(a, 100);
	for (i = 0; a[i] != '\0'; i++)
	{
		d = a[i] - '0' + c * 10;
		b[i] = '0' + d / 13;
		c = d % 13;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		if (flag)
		{
			if (b[i] == '0')
				continue;
			else
				flag = 0;
		}
		cout << b[i];
	}
	if (flag)
		cout << '0' << endl;
	else
		cout << endl;
	cout << c << endl;
	return 0;
}