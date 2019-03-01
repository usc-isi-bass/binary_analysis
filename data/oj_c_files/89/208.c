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
	int n;
	cin >> n;
	int take[10000];
	int check[10000];
	for (int p = 0; p < n; p++)
	{
		take[p] = 0;
		check[p] = 0;
	}
	int i, j;
	while(1)
	{
		cin >> i >> j;
		if (i == 0 && j == 0)
			break;
		else
		{
			take[i] = 1;
			check[j]++;
		}
	}
	int flag = 0;
	for (int k = 0; k < n; k++)
	{
		if (take[k] == 0 && check[k] == n - 1)
		{
			cout << k << endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "NOT FOUND" << endl;
	return 0;
}