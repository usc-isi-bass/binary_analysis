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

/************************************
1.cpp
???2011-11-23
??(11.8) ????????
?? 1100012886
************************************/

//??????????????????
int main()
{
	int i, j, i1, j1, n, n1 = 0, m;
	int sperm[9][9] = {0}, temp[9][9]; //??????????????????????????????????
	cin >> m >> n;
	sperm[4][4] = m;
	do
	{
		n1++; //n1?????
		for (i = 0; i <= 8; i++)
		{
			for (j = 0; j <= 8; j++)
			{
				temp[i][j] = 0;
			}
		} //?temp????
		for (i = 5 - n1; i <= 3 + n1; i++)
		{
			for (j = 5 - n1; j <= 3 + n1; j++)
			{
				//?????????????n1??????
				for (i1 = i - 1; i1 <= i + 1; i1++)
				{
					for (j1 = j - 1; j1 <= j + 1; j1++)
					{
						temp[i1][j1] = temp[i1][j1] + sperm[i][j]; //?????????temp
					}
				}
			}
		}
		for (i = 0; i <= 8; i++)
		{
			for (j = 0; j <= 8; j++)
			{
				sperm[i][j] = sperm[i][j] + temp[i][j];
			}
		} //??
	} while (n1 < n);
	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			cout << sperm[i][j];
			if (j < 8) cout << " ";
		}
		cout << endl;
	} //??
	return 0;
}
