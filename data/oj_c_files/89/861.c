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
	int n, know[10000] = {0}, beKnown[10000] = {0}, i, j, flag = 0;
	int *p = know, *q = beKnown;
	cin >> n;
	while (1)
	{
		cin >> i >> j;
		if (i == 0 && j == 0)
		{
			break;
		}
		know[i]++;
		beKnown[j]++;
	}
	for (i = 0; i < n; i++)
	{
		if (*p == 0 && *q == n - 1)
		{
			flag = 1;
			break;
		}
		else
		{
			p++;
			q++;
		}
	}
	if (flag == 0)
	{
		cout << "NOT FOUND" << endl;
	}
	else
	{
		cout << i << endl;
	}
	return 0;
}