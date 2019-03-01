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


int s[6][11][11];
int m, n;

int main()
{
	cin >> m >> n;
	s[0][5][5] = m;
	
	for (int day = 0; day < n; ++day)
		for (int x = 1; x < 10; ++x)
		for (int y = 1; y < 10; ++y)
		{
			s[day + 1][x][y] += 2 * s[day][x][y];
			s[day + 1][x - 1][y] += s[day][x][y];
			s[day + 1][x + 1][y] += s[day][x][y];
			s[day + 1][x][y - 1] += s[day][x][y];
			s[day + 1][x][y + 1] += s[day][x][y];
			s[day + 1][x - 1][y - 1] += s[day][x][y];
			s[day + 1][x + 1][y + 1] += s[day][x][y];
			s[day + 1][x + 1][y - 1] += s[day][x][y];
			s[day + 1][x - 1][y + 1] += s[day][x][y];
		}
	
	for (int x = 1; x < 10; ++x)
	{
		for (int y = 1; y < 9; ++y)
			cout << s[n][x][y] << ' ';
		cout << s[n][x][9] << endl;
	}

}