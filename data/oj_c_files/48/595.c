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

//****************************************
//*???????????               **
//*????? 1100012873                **
//*???2011.11.23                     **
//****************************************
int s[11][11] = {0};
void ct (int, int);
int main()
{
	int a, b, p, q;
	cin >> a >> b;
	ct (a, b);
	for (p = 1;p < 10;p++)
		for (q = 1;q < 10;q++)//????????????
		{
			if (q == 1)
				cout << s[p][q];
			else if (q == 9)
				cout << ' ' << s[p][q] << endl;
			else if (q >= 0 && q <= 9)
				cout << ' ' << s[p][q];
		}
    return 0;
}
void ct (int m, int n)
{
	int i,j,z[11][11];
	if (n == 0)
		s[5][5] = m;//?????????????
	else
	{
		ct (m, n - 1);
		for (i = 1;i < 10;i++)
			for (j = 1;j < 10;j++)
				z[i][j] = 2 * s[i][j] + s[i - 1][j] + s[i + 1][j] + s[i][j + 1] + s[i][j - 1] + s[i + 1][j + 1] + s[i - 1][j - 1] + s[i + 1][j - 1] + s[i - 1][j + 1];
        for (i = 1;i < 10;i++)
			for (j = 1;j < 10;j++)
				s[i][j] = z[i][j];//z??????????????
	}
}	
