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


int f(int a)
{
	if (a % 2 == 0)
		return a / 2;
	return a * 3 + 1;
}

int main()
{
	int a;
	cin >> a;
	while (a != 1)
	{
		if (a % 2 == 0)
			cout << a << "/2=" << f(a) << endl;
		else
			cout << a << "*3+1=" << f(a) << endl;
		a = f(a);
	}
	if (a == 1)
		cout << "End" << endl;
	return 0;
}