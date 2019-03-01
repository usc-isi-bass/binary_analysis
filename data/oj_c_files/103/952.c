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
	char c, t;
	int i = 0;
	c = cin.get();
	if (c >= 97)
		c -= 32;
	t = c;
	while (c != '\n')
	{
		if (c >= 97)
			c -= 32;
		if (t == c)
			i++;
		else
		{
			cout << "(" << t << "," << i << ")";
			i = 1;
			t = c;
		}
		c = cin.get();
	}
	cout << "(" << t << "," << i << ")" << endl;
	return 0;
}
