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
	int a[16], i, j, k, sum;
	do
	{
		sum = 0;
		i = 0;
		cin >> a[0];
		if (a[0] != -1)
		{
			do
			{
				i++;
				cin >> a[i];
			} while (a[i] != 0);
			for (j = 0; j < i; j++)
			{
				for (k = 0; k < i; k++)
				{
					if (a[k] == 2 * a[j])
						sum += 1;
				}
			}
			cout << sum << endl;
		}
		else 
			break;
	} while (1);
	return 0;
}
