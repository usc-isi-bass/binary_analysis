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
	int a[16], i, j, k, m = 1, num = 0;
	while (cin >> a[0])
	{
		num = 0; 
		m = 1;
		if (a[0] == -1) break;
		else 
		{
			for (i = 1; i < 16; i++, m++)
			{
				cin >> a[i];
				if (a[i] == 0) break;
			}

			for (j = 0; j < m; j++)
			{
				for (k = 0; k < m; k++)
				{
					if (k == j) continue;
					if ( (a[k] == 2 * a[j]) || (a[j] == 2 * a[k]) ) 
					{
						num++;
					}
				}
			}

			cout << num / 2 << endl;
		}
	}
	return 0;
}
	