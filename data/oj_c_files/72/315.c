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

struct p
{
	int m;
	int n;
}a[20];
int main()
{
	int m, n, i, j, num[22][22], count = 0, l, k;
	cin >> m >> n;
	for(l = 0; l < 22; l++)
		for(k = 0; k < 22; k++)
			num[l][k] = 0;
	for(i = 1; i <= m; i++)
		for(j = 1; j <= n; j++)
			cin >> num[i][j];
	for(i = 1; i <= m; i++)
		for(j = 1; j <= n; j++)
		{
			if(num[i][j] >= num[i - 1][j] && num[i][j] >= num[i][j - 1] && num[i][j] >= num[i][j + 1] && num[i][j] >= num[i + 1][j])
			{
				a[count].m = i - 1;
				a[count].n = j - 1;
				count++;
			}
		}
	for(i = 0; i < count; i++)
	{
		cout << a[i].m << " " << a[i].n << endl;
	}
	return 0;
}
