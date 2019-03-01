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
	int m,n;
	cin >> m >> n;
	int height[200][200];
	int flag[200][200];
	memset(flag, 0, sizeof(flag));
	memset(height, 0, sizeof(height));
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n ;j++)
		{
			cin >> height[i][j];
		}
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
		{
			if (height[i][j] >= height[i - 1][j] && height[i][j] >= height[i + 1][j] && height[i][j] >= height[i][j - 1] && height[i][j] >= height[i][j + 1])
				flag[i][j] = 1;
		}
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			if (flag[i][j])
				cout << i - 1 << " " << j - 1 << endl;
	return 0;
}


