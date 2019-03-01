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

void process(int n)
{
	int m;
	if (n == 1)
	{
		cout <<"End" << endl;
		return;
	}
	if (n % 2 == 0)
	{
		m = n / 2;
		cout << n << '/' << 2 << '=' << m << endl;
	}
	else
	{
		m = n * 3 + 1;
		cout << n << "*3+1=" << m << endl;
	}
	process(m);
}
int main()
{
	int n;
	cin >> n;
	process(n);
	return 0;
}
