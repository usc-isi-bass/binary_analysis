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


int main (void)
{
	int a[100][100]={0};
	int x, y, i, j, k, n, sum = 0;
	cin >> n;
	for (k = 0; k < n; k++)
	{
		sum = 0;      // ??
		memset(a,0,sizeof(a)); // ??
		cin >> x >> y;
		for (i = 0; i < x; i++)
			for (j = 0; j < y; j++)
			{
				cin >> *(*(a+i)+j);
			}

		for (i = 0; i < x; i++)  
			for (j = 0; j < y; j++)
			{
				if (i == 0 || j == 0 || i == (x-1) || j == (y-1))    //?????????
					sum += *(*(a+i)+j);
			}

		cout << sum << endl;
	}

	return 0;
}