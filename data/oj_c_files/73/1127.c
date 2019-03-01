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
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int i, j, k, column=-1;
	int arr[5][5];
	for (i = 0; i < 5; ++ i) for (j = 0; j < 5; ++ j) cin >> arr[i][j];
	for (i = 0; i < 5; ++ i)
	{
		for (j = 0; j < 5; ++ j)
		{
			for (k = j+1; k < 5; ++ k)
				if (arr[i][j] < arr[i][k]) break;
			if (k == 5)
			{
				column = j;
				break;
			}
		}
		for (j = 0; j < 5; ++ j)
			if (arr[i][column] > arr[j][column]) break;
		if (j == 5)
		{
			cout << i+1 << " " << column+1 << " " << arr[i][column] << endl;
			break;
		}
	}
	if (i == 5) cout << "not found\n";
}
