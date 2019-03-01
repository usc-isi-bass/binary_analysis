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
//*????2.cpp   **
//*?????? 1300012966 **
//*???2013.10.30  **
//*??????????   **
//********************************
int main()
{
	int n, a[100001], k, i, j;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	j = 0;
	for (i = 1; i <= n; i++)
	{
		if (a[i] == k)
		{
		}
		else
		{
			if (j == 1)
			{
				cout << " " << a[i] ;
			}
			else
			{
				cout << a[i];
			}
			j = 1;
		}
	}
	return 0;
}
	 