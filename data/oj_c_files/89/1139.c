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

/*
*12-4
*??? 1200012851
*2012.12.11
*??????
**/


int main()
{
	int i, n, man[10000] = {0}, a, b, flag = 0;
	cin >> n;
	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		man[a] = -1;
		man[b]++;
	}
	for (i = 0; i < n; i++)
	{
		if (man[i] == n - 1)
		{
			cout << i << endl;
			flag = 1;
		}
	}
	if (flag == 0)
	{
		cout << "NOT FOUND" << endl;
	}
	return 0;
}