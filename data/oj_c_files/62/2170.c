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
	char a, b;
	cin >> a;
	b = a;
	cout << a;
	while (cin.get(a))
	{
		if (a != ' ' || (a == ' ' && b != ' '))
		{
			cout << a;
			b = a;
		}
	}
	return 0;
}