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
	int a, n;
	cin >> n;
	while (n --)
	{
		cin >> a;
		if (a == 1)
			cout << 1 << endl;
		else if (a == 2)
			cout << 1 << endl;
		else
		{
			int a1, a2, a3;
			a1 = 1;
			a2 = 1;
			for (int i = 3; i <= a;	i ++)
			{
				a3 = a1 + a2;
				a1 = a2;
				a2 = a3;
			}
			cout << a3 << endl;
		}
	}
	return 0;
}