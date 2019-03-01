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
	int n, i, k = 0, num;
	int a[100] = {0}, b[100];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> num;
		if(a[num] == 0)
		{
			a[num] ++;
			b[k] = num;
			k++;
		}
	}
	for (i = 0; i < k - 1; i++)
		cout << b[i] << " ";
	cout << b[k - 1];
	return 0;
}

	
