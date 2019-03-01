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
	int n, i, len, p = 0;
	cin >> n;
	char str[40];
	for (i = 0; i < n; i++)
	{
		cin >> str;
		len = strlen(str);
		if (p + len < 80)
		{
			if (p != 0)
			{
				cout << " ";
				p++;
			}
			p = p + len;
		}
		else
		{
			p = len;
			cout << endl;
		}
		cout << str;
	}
	return 0;
}
