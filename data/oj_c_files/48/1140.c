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

//**************************
//**�y3�?o&#207;&#184;&#190;�?&#196;��&#214;3�&#235;�&#169;�?**
//**��&#213;&#223;?oo&#206;?�			  **
//**�&#188;&#228;?o2013.12.8		  **
//**&#206;&#196;&#188;t&#195;&#251;?o2.cpp		  **
//**************************
int main()
{
	int m, n, i, j, g, cnt[9][9] = {0};
	cin >> m >> n;
	cnt[4][4] = m;
	for (i = 0; i < n; i++)
	{
		int sq[9][9] = {0};
		for (j = 0; j < 9; j++)
			for (g = 0; g < 9; g++)
			{
				if (cnt[j][g] != 0)
				{
					sq[j][g] +=  cnt[j][g];
					if (j + 1 < 9)
					{
						sq[j + 1][g] += cnt[j][g];
						if (g + 1 < 9)
							sq[j + 1][g + 1] += cnt[j][g];
						if (g - 1 >= 0)
							sq[j + 1][g - 1] += cnt[j][g];
					}
					if (j - 1 >= 0)
					{
						sq[j - 1][g] += cnt[j][g];
						if (g + 1 < 9)
							sq[j - 1][g + 1] += cnt[j][g];
						if (g - 1 >= 0)
							sq[j - 1][g - 1] += cnt[j][g];
					}
					if (g + 1 < 9)
						sq[j][g + 1] += cnt[j][g];
					if (g - 1 >= 0)
						sq[j][g - 1] += cnt[j][g];
				}
			}
		for (j = 0; j < 9; j++)
			for (g = 0; g < 9; g++)
				cnt[j][g] += sq[j][g]; 
	}
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
		{
			if (j < 8)
				cout << cnt[i][j] << ' ';
			else
				cout << cnt[i][j] << endl;
		}
	return 0;
}