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

// * * * * * * * * * * * * * * *
// *???????             *
// *??????  1300013011   *
// *???2013.11.4            *
// * * * * * * * * * * * * * * *
int main()
{
	// a????h0?l0?????????j??????????
	int a[5][5], max = 0, l0 = 0, h0, j = 0;
	
	for (int i = 0; i <= 4; i++)        // ????????
	{
		for (int k = 0; k <= 4; k++)
			cin >> a[i][k];
	}
	
	for (int h = 0; h <= 4; h++)       // ??????????
	{
		max = a[h][0];                 // ?????????????????
		h0 = h;
		l0 = 0;
		for (int l = 1; l <= 4; l++)
		{
			if (a[h][l] < max)
				continue;
			max = a[h][l];
			l0 = l;                    // h0?l0?????????
		}

		// ?????????????????????j?1
		if ((a[0][l0] >= max) + (a[1][l0] >= max) + (a[2][l0] >= max) +
			(a[3][l0] >= max) + (a[4][l0] >= max) == 5)
		{
			cout << h0 + 1 << " " << l0 + 1 << " " << max << endl;
			j++;
		}
	}

	if (j == 0)    // ????????????not found
		cout << "not found" << endl;
	return 0;
}