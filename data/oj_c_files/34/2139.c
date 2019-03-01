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


int n;

void oddnum(int a)
{
	int b;
		b = a * 3 + 1;
		n = b;
	cout << a << '*' << 3 << '+' << 1 << '=' << b << endl;
}

void evennum(int a)
{
	int b;
	b = a / 2;
	n = b;
	cout << a << '/' << 2 << '=' << b <<endl;
}

int main()
{
	cin >> n;
	if (n == 1)
		cout << "End";
	else
	{
		while (n != 1)
		{
			if (n % 2 == 0)
				evennum(n);
			else
				oddnum(n);
		}
		cout << "End";
	}
	return 0;
}