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
	char word[300][41];
	int n, i, num[300] = {0}, *p, total = 0;
	cin >> n;
	p = num;
	for (i = 0; i < n; i++)
	{
		cin >> word[i];
		for (*(p + i) = 0; *(p + i) < 41; *(p + i) = *(p + i) + 1)
			if (word[i][*(p + i)] == '\0')
				break;
	}
	for (i = 0; i < n; i++)
	{
		if (total == 0)
		{
			total = *(p + i);
			cout << word[i];
		}
		else
		{
			total = total + *(p + i) + 1;
			if (total <= 80)
				cout << ' ' << word[i];
			else
			{
				total = *(p + i);
				cout << endl;
				cout << word[i];
			}
		}
	}
	return 0;
}