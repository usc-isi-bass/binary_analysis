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
	int i, j, n, x[15], count;
	while (1)
	{
		count = 0;
		for (n = 0; ; n++)
		{
			cin >> x[n];
			if (x[n] <= 0) break;
		}
		if (x[n] == -1) break;
		for (i = 0; i < n; i++)
			for(j = 0; j < n; j++)
			{
				if (j == i) continue;
				if (x[j] == 2 * x[i]) count++;
			};
		cout << count << endl;
	}
	return 0;
}