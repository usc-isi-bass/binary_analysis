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

int main ( )
{
	int t, M, N, i;
	cin >> t;
	int f(int x, int y);
	for (i = 0;i < t;i++)
	{
		cin >> M >> N;
		cout << f(M, N) <<endl;
	}
	return 0;
}
int f(int x, int y)/*?????*/
{
	int num, m, n;
	if (y == 1 || x == 0)/*????????????????1*/
		return 1;
	else if (y != 1 && x != 0 && x < y )/*?????????,???????*/
		return (f(x, y-1));
	else
	return (f(x, y-1) + f(x-y, y));/*?????????*/
}