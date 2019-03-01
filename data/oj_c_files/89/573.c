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

int know[10000];
int main()
{
	memset(know, 0, sizeof(know));  //?????????????????????????n - 1??????????
	int n;
	cin >> n;
	int flag = 1;
	int i, j;
	for (;;)
	{
		cin >> i >> j;
		if (i == 0 && j == 0)
		{
			break;
		}
		else
		{
			know[i] = -1;
			know[j]++;
		}
	}
	for (int k = 0; k < n; k++)
	{
		if (know[k] == n - 1)
		{
			cout << k << endl;
			flag = 0;
			break;
		}
	}
	if (flag)
		cout << "NOT FOUND" << endl;
	return 0;
}

