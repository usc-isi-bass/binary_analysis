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
	int row, col, array[100][100], i, j, m , n, a = 1;
	cin >> row >> col;
	for(i = 0; i < row ; i ++)
	{
        for(j = 0; j < col; j ++)
		{
			cin >> array[i][j];
		}
	}
	n = 0;
		for(m = 0 ; m < col ; m ++)
		{
			j = m;
			i = n;
			do
			{
				if(i >= row || j < 0) break;
				cout << array[i][j] << endl;
				i ++;
				j --;
			}while(1);
		}
		for(n = 1; n < row; n ++)
		{
			i = n;
			j = col - 1;
			do
			{
		     	if(i >= row || j < 0) break;
				cout << array[i][j] << endl;
				i ++;
				j --;
			}while(1);
		}
	return 0;
}