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
 * file    practice 1_6
 * author  ??
 * date    2010-11-12
 * description
           ????????????
*/



int main()
{
	int n, x, y, i;
	float a0, a;
	cin >> n;
	cin >> y >> x;
	a0 = x / 1.0 / y;
	for (i = 1; i <= n - 1; i ++)
	{
		cin >> y >> x;
		a = x / 1.0 / y;
		if (a - a0 > 0.05)
			cout << "better" << endl;
		else 
			if (a - a0 < -0.05)
				cout << "worse" <<endl;
			else 
				cout << "same" << endl;
	}
	return 0;
}
