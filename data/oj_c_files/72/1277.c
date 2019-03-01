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
//*???4.cpp   **
//*?????? 1200012768 **
//*???2013.1.4  **
//*???????  **
//********************************
int main()
{
	int m, n, i, j, h[22][22] = {0}, flag[20][20] = {0};
	cin >> m >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> h[i][j];
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			if (h[i][j] >= h[i - 1][j])
				flag[i][j]++;
			if (h[i][j] >= h[i + 1][j])
				flag[i][j]++;
			if (h[i][j] >= h[i][j - 1])
				flag[i][j]++;
			if (h[i][j] >= h[i][j + 1])
				flag[i][j]++;
			if (flag[i][j] == 4)
				cout << i - 1 << " " << j - 1 << endl;
		}
	return 0;
}
