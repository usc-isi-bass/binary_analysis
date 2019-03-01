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
	int a[5][5], i, j, t = 0, col, g = 0;
	for (i = 0; i <= 4; i++)
		for (j = 0; j <= 4; j++)
		{
			cin >> a[i][j];
		}
		for (i = 0; i <= 4; i++)
		{
            for (j = 0; j <= 4; j++)
			{
				if (t < a[i][j])
				{
					t = a[i][j];
					col = j;
				}
			}
		    if (t <= a[0][col] && t <= a[1][col] && t <= a[2][col] && t <= a[3][col] && t <= a[4][col])
			{
				cout << i + 1 << " " <<  col + 1 << " " <<  t << endl;
			}
			else
			{
				t = 0;
				g ++;
			}
		}
		if (g == 5)
		{
			cout << "not found" << endl;
		}
		return 0;
}