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
	int counts[16] = {0}, n, m, i, j, flag, time;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		flag = time = 0;
		cin >> m;
		if (m == 0)
		{
			cout << 60 << endl;
			time = 60;
		}
		for (j = 1; j <= m; j++)
		{
			cin >> counts[j];
		}
		for (j = 1; j <= m; j++)
		{
			flag += counts[j] - counts[j - 1];
			time += counts[j] - counts[j - 1];
			if (time >= 60)
			{
				cout << flag - time + 60 << endl;
				break;
			}
			time += 3;
			if (time >= 60)
			{
				cout << flag << endl;
				break;
			}
		}
		if (time < 60)
		{
			cout << flag - time + 60 << endl;
		}
	}
	return 0;
}