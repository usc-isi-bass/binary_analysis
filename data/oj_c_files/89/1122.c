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

/*
/???   12(4)
/??     ???
/??     2012?12?11?
/???   ??????
*/
struct person
{
	int x, y;
}p[10001];
int main()
{
	int k, i, j, n;
	cin >> n;
	while(cin >> i >> j && (i != 0 || j != 0))
	{
		p[i].x++;
		p[j].y++;
	}
	for(k = 0; k <= n - 1; k++)
	{
		if(p[k].x == 0 && p[k].y == n - 1)
		{
			cout << k << endl;
		}
	}
	return 0;
}