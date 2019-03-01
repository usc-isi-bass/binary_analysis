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
	int shuzu[1002][1002];
	int n, i, j, x1, y1, x2, y2;
	cin >> n;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			cin >> shuzu[i][j];
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
		{
			if(shuzu[i][j] == 0&&shuzu[i][j + 1] == 0&&shuzu[i + 1][j] == 0)
			{
				x1 = i;
				y1 = j;
			}
			if(shuzu[i][j] == 0&&shuzu[i][j - 1] == 0&&shuzu[i - 1][j] == 0)
			{
				x2 = i;
				y2 = j;
			}
		}
	cout << (x2 - x1 + 1) * (y2 - y1 + 1) - 2 * (x2 - x1 + 1) - 2 * (y2 - y1 + 1) + 4 << endl;
	return 0;
}
				
