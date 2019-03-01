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
	int num, d, a[9][9] = {0}, tmp[9][9] = {0};
	cin >> num >> d;
	a[4][4] = num;
	for (int i = 0; i < d; i++)
	{
		for (int x = 0; x < 9; x++)
			for (int y = 0; y < 9; y++)
				tmp[x][y] = 0;
		for (int x = 0; x < 9; x++)
			for (int y = 0; y < 9; y++)
			{
				if(x > 0)
				{
					tmp[x - 1][y] += a[x][y];
					if (y > 0)
					{
						tmp[x - 1][y - 1] += a[x][y];
						if (y < 9)
							tmp[x - 1][y + 1] += a[x][y];
					}
					if (x < 9)
					{
						tmp[x + 1][y] += a[x][y];
						if (y > 0)
						{
							tmp[x + 1][y - 1] += a[x][y];
							if (y < 9)
								tmp[x + 1][y + 1] += a[x][y];
						}
					}
				}
				if(y > 0)
					tmp[x][y - 1] += a[x][y];
				if (y < 9)
					tmp[x][y + 1] += a[x][y];
				tmp[x][y] += a[x][y] * 2;
			}
			for (int x = 0; x < 9; x++)
				for (int y = 0; y < 9; y++)
					a[x][y] = tmp[x][y];
	}
	for (int x = 0; x < 9; x++)
		for (int y = 0; y < 9; y++)
		{
			cout << a[x][y];
			if (y == 8)
				cout << endl;
			else
				cout << " ";
		}
			




	
	return 0;
}