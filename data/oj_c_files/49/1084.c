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
	char str[505] = {0};
	cin >> str;
	int length = strlen(str);
	for (int l = 2 ; l <= length ; l++)
	{
		for (int i = 0; i <= length - l; i ++)
		{
			if (str[i] == str[i + l - 1])
			{
				int m = i + 1, n = i + l - 2;
				for (; m <= n ; m ++, n--)
				{
					if (str[m] != str[n])
						break;
				}
				if (m > n)
				{
					for (int m = i ; m <= i + l - 1; m++)
						cout << str[m];
					cout << endl;
				}
			}
		}
	}
	cin.get();
	cin.get();
	return 0;
}