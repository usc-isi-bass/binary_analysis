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
	int a, b, c = 0, n, t = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if(a >= 90 && a <= 140 && b >= 60 && b <= 90)
		{
			t = t + 1;
		}
		else
		{
			if (t > c)
				c = t;
			    t = 0;
		}
	}
	if(t > c)
		c = t;
	cout << c << endl;

	return 0;
}