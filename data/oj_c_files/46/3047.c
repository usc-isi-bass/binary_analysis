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

int main ()
{
	int a[110][110];
	int row, col, i, j, k, h, l, count, hzz, lzz; // h ?row l? col
	cin >> row >> col;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			cin >> a[i][j];
		}
	}
	// ??? ???i? ? i ??? lzz?? ??i????? row - i + 1 ? col - ?i - 1?
	// ?lzz?i ? ????i??? col - i + 1?
	// ?hzz?j ? ????j++??? row - j + 1?
	// ?lzz?col - i + 1??lzz-- ??? col - hzz + 1?
	// ?hzz?j? ? hzz???  row - hzz + 2 ?
    // ?????????????
	count = 0;
	h = row;
	l = col;
	hzz = 1;
	lzz = 1;
	i = 1;
	j = 1;
	while (count <= row * col)
	{
		for (lzz = j; lzz <= col - (j - 1); lzz++)   //???????
		{
			cout << a[i][lzz] << endl;
			count++;
			if (count == row * col) return 0; 
		} 
		j = lzz - 1;   //?????????lzz+1
		for (hzz = i + 1; hzz <= row - i + 1; hzz++) // ?????
		{
			cout << a[hzz][j] << endl;
			count++;
        	if (count == row * col) return 0; 
		}
		i = hzz - 1;
		for (lzz = j - 1; lzz >= col - j + 1; lzz--)
		{
			cout << a[i][lzz] << endl;
			count++;
	        if (count == row * col) return 0; 
		}
		j = lzz + 1;
		for (hzz = i - 1; hzz >= row - i + 2; hzz--)
		{
			cout << a[hzz][j] << endl;
            count++;
	        if (count == row * col) return 0; 
		}
		j = j + 1;
		i = hzz + 1;
	}
	return 0;
}
