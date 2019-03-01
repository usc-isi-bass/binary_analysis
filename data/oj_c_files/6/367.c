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
	int square[100][100];
	int k, i, j;
	int (* p)[100];
	p = square;
	int sum = 0;
	for (cin >> k; k; --k)
	{
		int wide;
		int height;
		sum = 0;
		cin >> height >> wide;
		for (i = 0; i < height; i++)
			for (j = 0; j < wide; j++)
				cin >> square[i][j];
		p = square;
		for (i = 0; i < height; i++)
			for (j = 0; j < wide; j++)
			{
				if (i == 0 || j == 0 || i == height - 1 || j == wide - 1)
					sum += * ( * (p + i) + j);
			}
			cout << sum << endl;
	}
	return 0;
}