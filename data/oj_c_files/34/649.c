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

void check(int);
int main()
{
	int i, p, n;
	cin >> n;
	check(n);
	cout << "End" << endl;
	return 0;
}
void check(int n)
{
	if(n == 1)
		return;
	else
	{
		if(n % 2 == 0)
		{
			cout << n << "/" << 2 << "=" << n / 2 << endl;
			n /= 2;
		}
		else
		{
			cout << n << "*" << 3 << "+" << 1 << "=" << 3 * n + 1 << endl;
			n = 3 * n + 1;
		}
		check(n);
	}
}

