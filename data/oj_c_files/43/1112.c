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

//***************************************
//** ????????? **
//** ?????? 1300012722 **
//** ???2013.10.24 **
//***************************************
int main()
{
	int m, a, b, c, d, i, k;              //????m??????a?b?????c?d?
	cin >> m;
	for (a = 3; a < m; a = a + 2)
	{
		b = m - a;
		if (b < a) break;                 //??b>a,????
		c = sqrt(a);                      //?a????
		for (i = 2; i <= c; i++)
			if (a % i == 0) break;
		if (i > c)                        //??a??????b?????
		{
			d = sqrt(b);
		for (k = 2; k <= d; k++)
			if (b % k == 0) break;
		if (k > d)                        //??b???????a?b??
			cout << a << " " << b << endl;
		}
	}
	return 0;
}