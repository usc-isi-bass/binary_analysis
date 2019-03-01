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



int f(int);

int main()
{
	int n;
	cin >> n;

	while(n--)
	{
		int a;
		cin >> a;
		cout << f(a) << endl;
	}

	return 0;
}

int f(int x)
{
	if (x == 1 || x == 2) return 1;

	return f(x - 1) + f(x - 2);
}