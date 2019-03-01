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

int main ()
{
	int n, i, g = 0;
	cin >> n;
	int a1[1000000], a2[1000000], num[1000000] = {0};
	for (i = 0; i <= n * (n - 1); i++)
	{
		cin >> a1[i] >> a2[i];
		if (a1[i] == 0 && a2[i] == 0) break;
		num[a2[i]]++;
	}
	for (i = 0; i < n; i++)
	{
		if (num[i] == n - 1)
		{
			g = 1;
			cout << i;
		}	
	}
	if (g == 0) cout << "NOT FOUND";
	return 0;
}
