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
	int a[13], i, w, n = 12;
	cin >> w;
	n = n + w;
	a[1] = 31;
	a[2] = 28;
	a[3] = 31;
	a[4] = 30;
	a[5] = 31;
	a[6] = 30;
	a[7] = 31;
	a[8] = 31;
	a[9] = 30;
	a[10] = 31;
	a[11] = 30;
	a[12] = 31;
	for (i = 1; i <= 12; i++)
	{
		if ((n % 7) == 5)
			cout << i << endl;
		n = n + a[i];
	}
	return 0;
}

