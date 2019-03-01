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


int sum[21] = {0};
void calculate (int t);

int main()
{
	int n, i, a;
	cin >> n;
	sum[1] = sum[2] = 1;
	calculate (3);
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		cout << sum[a] << endl;
	}

	return 0;
}

void calculate (int t)
{
	if (t <= 21)
	{	
		sum[t] = sum[t - 1] + sum[t - 2];
		calculate (t + 1);
	}
}