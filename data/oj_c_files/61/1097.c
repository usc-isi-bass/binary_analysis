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

//2013.11.23
//zwb

int n, i, j = 1, m;
int num[21] = {0};
int fib(int m)
{
	if(m == 1 || m == 2)
		return 1;
	else
		return fib(m - 1) + fib(m - 2);
}

int main ()
{
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> m;
		num[m] = fib(m);
		cout << num[m] << endl;
	}
	return 0;
}
