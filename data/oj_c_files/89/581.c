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

//****************************************************************
// ????1000012789_6.cpp                                      *
// ???wusy                                                    *
// ???12,8                                                    *
// ???????                                                *
//****************************************************************
int main()
{
	int n, i, flag = 0, a[50000], b[50000], count[50000];
	cin >> n;

	for (i = 0; i < 50000; i++)
		count[i] = 0;

	for (i = 0; ; i++)
	{
		cin >> a[i];
		cin >> b[i];
		if (a[i] == 0 && b[i] == 0)
			break;
		count[ b[i] ]++;
	}

	for (i = 0; i <= 50000; i++)
		
		if (count[i] == n - 1)
		{
			cout << i << endl;
			flag = 1;
		}

	if (flag == 0)
		cout << "NOT FOUND";

	return 0;
}

