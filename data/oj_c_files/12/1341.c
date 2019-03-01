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

//********************************
//*????1.cpp   **
//*?????? 1300012966 **
//*???2013.10.30  **
//*?????   **
//********************************
int main()
{
	int a[17], i, j, k, n;
	cin >> a[1];
	while (a[1] != -1)
	{
		n = 0;
		i = 1;
		while (a[i] != 0)
		{
			i++;
			cin >> a[i];
		}
		for (j = 1; j <= i; j++)
		{
			for (k = 1; k <= i; k++)
			{
				if (a[j] == a[k] * 2)
				{
					n++;
				}
			}
		}
		n = n - 1;
		cout << n << endl;
		cin >> a[1];
	}
	return 0;
}


