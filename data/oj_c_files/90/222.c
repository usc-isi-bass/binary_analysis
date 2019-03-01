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

int c(int m, int n)
{
	int s1, s2, k = m;
	s1 = s2 = 1;
	while (k--)
	{
		s1 *= n--;
		s2 *= m--;
		//cout << s1 << ' ' << s2 << endl;
	}
	return s1 / s2;
}


int f(int m, int n)
{
	if (n == 1)
		return 1;
	//if (m == 0)
		//return 1;
	if (m < n)
	{
		return f(m, n - 1);
	}
		
	return f(m, n - 1) + f(m - n, n);
}

int main()
{
	int t;
	cin >> t;
	//cout << c(5, 3);
	//c(3, 5);

	int m, n;
	while (t--)
	{
		cin >> m >> n;
		cout << f(m, n) << endl;
	}
	return 0;
}


