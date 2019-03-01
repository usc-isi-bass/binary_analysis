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

int f(int, int);
int main()
{
	int x, m, n;
	cin >> x;
	for(int i = 1; i <= x; i++)
	{
		cin >> m >> n;
		cout << f(m, n) << endl;
	}
    return 0;
}
int f(int a, int b)
{
	if(b == 1)
		return 1;
	else
		if(a > b)
			return (f(a, b - 1) + f(a - b, b));
		else
			if(a < b)
				return f(a, a);
			else
				return (1 + f(a, b - 1));
}
