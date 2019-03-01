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
	int N, x[31] = {0}, i, r;
	x[0] = 1;
	cin >> N;
	while (N > 0)
	{
		r = 0;
		for (i = 0; i <= 30; i++)
		{
			int t = r;
			r = (x[i] * 2 + r) / 10;
			x[i] = (x[i] * 2 + t) % 10;
		}
		N--;
	}
	i = 30;
	while (x[i] == 0)
		i--;
	for (;i >= 0;i--)
		cout << x[i];
	cout << endl;
	return 0;
}
