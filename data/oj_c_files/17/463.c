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
	int i, j;
	char a[101], b[101];
	while (cin.getline(a, 101))
	{
		for (i = 0; i <= 100; i++)
			b[i] = ' ';
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] == '(')
				b[i] = '$';
			if (a[i] == ')')
			{
				for (j = i; j >= 0; j--)
					if (b[j] == '$')
					{
						b[j] = ' ';
						break;
					}
				if (j == -1)
					b[i] = '?';
			}
		}
		for (i = 0; a[i] != '\0'; i++)
				cout << a[i];
		cout << endl;
		for (i = 0; a[i] != '\0'; i++)
				cout << b[i];
		cout << endl;
	}
	return 0;
}
	