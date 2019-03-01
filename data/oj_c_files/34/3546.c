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


void jiaogu(int n);

int main()
{
	int n;
	cin >> n;
	jiaogu(n);
	return 0;
}

void jiaogu(int n)
{
	if (n == 1)
		cout << "End" << endl;
	else
	{
		if (n % 2 == 1)
		{
			cout << n << "*" << 3 << "+" << 1 << "=" << n * 3 + 1 << endl;
			jiaogu(n * 3 + 1);
		}
		else
		{
			cout << n << "/" << 2 << "=" << n / 2 << endl;
			jiaogu(n / 2);
		}
	}
}
