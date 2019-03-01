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
	int i, j, begin, end, flag, p;
	char a[501];
	cin >> a;
	for (i = 0; a[i] != '\0'; i++)
		p = i;
	p++;
	for (i = 2; i <= p; i++)
	{
		for (j = 0; j <= p - i; j++)
		{
			flag = 1;
			for (begin = j, end = j + i - 1; end > begin; begin++, end--)
				if (a[begin] != a[end])
				{
					flag = 0;
					break;
				}
			if (flag == 1)
			{
				for (begin = j; begin <= j + i - 1; begin++)
					cout << a[begin];
				cout << endl;
			}
		}
	}
	return 0;
}