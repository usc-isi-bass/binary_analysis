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
	int a[5][5], i, j, row[5], col[5], sum, n;
	int max[5] = {0};
	sum = 0;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			cin >> a[i][j];
	}
	for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
		{
			if(a[i][j] > max[i])
			{
				max[i] = a[i][j];
				row[i] = i;
			    col[i] = j;
			}
		}
	for(n = 0; n < 5; n++)
	{
		for(i = 0; i < 5; i++)
		{
			if(a[i][col[n]] < max[n]) break;
		}
		if(i == 5)
		{
			sum++;
			cout << row[n] + 1 << " " << col[n] + 1 << " " << max[n] << endl;
		}
    }
	if(sum == 0)
		cout << "not found" << endl;
	return 0;
}
