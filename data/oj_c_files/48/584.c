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

//????
int bac[5][11][11] = {0};                    //bac???????n??i,j???????

void boom (int m,int n)
{
	int i,j,d1,d2;
	if (n == 0)								//?n=0??????
		bac[n][5][5] = m;
	else									//?n>1?????????
		boom (m , n - 1);
	if (n > 0)
		for (i = 1; i <= 9; i++)
			for (j = 1; j <= 9; j++)
			{
				bac[n][i][j] = bac[n - 1][i][j];
				for (d1 = -1; d1 <= 1; d1++)
					for (d2 = -1; d2 <= 1; d2++)
						bac[n][i][j] += bac[n - 1][i + d1][j + d2];    //?n>1??????????
			}
}

int main()
{
	int m,n,i,j;
	cin >> m >> n;
	boom (m,n);                                       //?????m??????n?????
	for (i = 1; i <= 9; i++)                          //???????
	{	for (j = 1; j <= 8; j++)  
			cout << bac[n][i][j] << ' ';
		cout << bac[n][i][9] << endl;
	}
	return 0;
}
			