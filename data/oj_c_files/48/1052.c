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

/**
 * @file   2.cpp
 * @author 3&#194;&#203;&#188;&#189;�
 * @date   2013-12-04
 * @description
 *         &#188;&#198;&#203;&#227;&#184;&#197;&#194;&#219;���??o�y�a(11.8) &#207;&#184;&#190;�?&#196;��&#214;3�&#235;�&#169;�?
 */


int a[10][10];
void func(int day);

int main()
{
	int day;
	cin >> a[5][5] >> day;

	func(day);

	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= 8; ++j)
			cout << a[i][j] << " ";
		cout << a[i][9] << endl;
	}
	return 0;
}

void func(int day)
{
	if (day == 0) return;
	int b[10][10] = {0};
	for (int i = 1; i <= 9; ++i)
		for (int j = 1; j <= 9; ++j)
			if (a[i][j])
			{
				b[i][j] += a[i][j];
				for (int p = i - 1; p <= i + 1; ++p)
					for (int q = j - 1; q <= j + 1; ++q)
						b[p][q] += a[i][j];
			}

	for (int i = 1; i <= 9; ++i)
		for (int j = 1; j <= 9; ++j)
			a[i][j] = b[i][j];

	func(day - 1);
}