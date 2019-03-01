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
	int m, n, pan[9][9] = {0}, i, j, k, t,pan1[9][9];
	cin >> m >> n;
	pan[4][4] = m;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 9; j++)
			for(k = 0; k < 9; k++)
				pan1[j][k] = 0;
		for(j = 0; j < 9; j++)
			for(k = 0; k < 9; k++)
				if(pan[j][k] != 0)
				{
					t = pan[j][k] * 10;
					pan1[j][k] += 2 * pan[j][k];
					pan1[j-1][k-1] += (t-2 * pan[j][k]) / 8;
					pan1[j-1][k] += (t-2 * pan[j][k]) / 8;
					pan1[j-1][k+1] += (t-2 * pan[j][k]) / 8;
					pan1[j][k-1] += (t-2 * pan[j][k]) / 8;
					pan1[j][k+1] += (t-2 * pan[j][k]) / 8;
					pan1[j+1][k-1] += (t-2 * pan[j][k]) / 8;
					pan1[j+1][k] += (t-2 * pan[j][k]) / 8;
					pan1[j+1][k+1] += (t-2 * pan[j][k]) / 8;
				}
		for(j = 0; j < 9; j++)
			for(k = 0; k < 9; k++)
				pan[j][k] = pan1[j][k];
	}
	for(j = 0; j < 9; j++)
	{
		for(k = 0; k < 8; k++)
			cout << pan[j][k] << ' ';
		cout << pan[j][k] << endl;
	}
	return 0;
}