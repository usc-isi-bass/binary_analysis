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
	int a[16], i, j, k, count = 0;
	while(1)
	{
		cin >> a[0];
		if (a[0] == -1)
			break;
		for (i = 1; i <= 15; i++)
		{
			cin >> a[i];
			if (a[i] == 0)
				break;
		}
		for (j = 0; j <= i - 2; j++)
		{
			for (k = j + 1; k <= i - 1; k++)
			{
				if (a[k] / a[j] == 2 && a[k] % a[j] == 0 || a[j] % a[k] == 0 && a[j] / a[k] == 2)
					count++;
			}
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}
		