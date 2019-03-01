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

//********************************
//*??:????**
//*????? 1300012839 **
//*???2013.12.6**
//********************************                                        //??????????
int main()
{
	int bac[5][13][13] = {0},m ,n ,day ,i ,j ,k ,l;                       //????????????????????
	cin >> m >> n;                                                        //m????5?5????????n???
	bac[0][5][5] = m;
	for(day = 1;day <= n;day++)                                          //????
	{
		for(int i = 1;i <= 9;i++)
		{
			for(j = 1;j <= 9;j++)
			{
				bac[day][i][j] = bac[day - 1][i - 1][j - 1] + bac[day - 1][i - 1][j]+bac[day - 1][i - 1][j + 1] +   
				                 bac[day - 1][i][j - 1] + bac[day - 1][i][j + 1] +
							     bac[day - 1][i + 1][j - 1] + bac[day - 1][i + 1][j] + bac[day - 1][i + 1][j + 1] +
							     2 * bac[day - 1][i][j];                 //??????n??????????
			}
		}
	}
	for(i = 1;i <= 9;i++)                                              //????
	{
		for(j = 1;j <= 8;j++)
			cout << bac[n][i][j] << ' ';
			cout << bac[n][i][9] << endl;
	}
	return 0;
}
