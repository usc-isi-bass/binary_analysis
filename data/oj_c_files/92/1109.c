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
	int i;
	int tj[NUM], qw[NUM], n;

	while (cin >> n && n)
	{
		for (i = 0; i < n; i++)
			cin >> tj[i];
		for (i = 0; i < n; i++)
			cin >> qw[i];
		sort(tj, tj + n);
		sort(qw, qw + n);

		int sum = 0, tjl = 0, tjr = n - 1, qwl = 0, qwr = n - 1;
		while (tjl <= tjr)
		{
			while (tjl <= tjr && tj[tjl] > qw[qwl])
			{
				sum += 200;
				tjl++;
				qwl++;
			}
			while (tjl <= tjr && tj[tjr] > qw[qwr])
			{
				sum += 200;
				tjr--;
				qwr--;
			}

			if (tjl <= tjr)
			{
				if (tj[tjl] < qw[qwr])
					sum -= 200;
				tjl++;
				qwr--;
			}
		}

		cout << sum << endl;
	}	

	return 0;
}
