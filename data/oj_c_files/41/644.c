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
	int a, b, c, d, e, k = 0;
	for (e = 4; e <= 5; e++)
		for (b = 2; b <= 5; b++)
		{
			if (b == e)
				continue;
			for (c = 1; c <= 5; c++)
			{
				if (c == b || c == e)
					continue;
				for (d = 1; d <= 5; d++)
				{
					if (d == e || d == b || d == c)
						continue;
					for (a = 4; a <= 5; a++)
					{
						if (e == a || a == b || a == c || a == d)
							continue;
						k = (e == 1) + (b == 2) + (a == 5) + (c != 1) + (d == 1);
						if ((b == 2 && c  == 1 && a == 5 && k == 2) || (b == 2 && d == 1 && a !=5 && k == 2)
							||(c == 2 && a == 5 && d == 1 && k == 2) )
						{
							cout << a;
							cout << " " << b << " " << c << " " << d << " " << e << endl;
						}
					}
				}
			}
		}
		return 0;
}