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
	char str[501];
	int l;
	int cnt;

	cin >> str;
	l = strlen(str);
	for (int i = 2; i <= l; i++)
		for (int j = 0; j <= l - i; j++)
		{
			cnt = 0;
			for (int k = 0; k <= i - 1; k++)
				if (str[j + k] == str[j + i - 1 - k])
					cnt++;
			if (cnt == i)
			{
				for (int k = j; k <= j + i - 2; k++)
					cout << str[k];
				cout << str[j + i - 1] << endl;
			}
		}
	return 0;
}