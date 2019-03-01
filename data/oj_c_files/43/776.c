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


int main ()
{
	int m, i1, i2, k, a, b = 0;
	cin >> m;
	for (i1 = 3; i1 <= (m / 2); i1 += 2)
	{
		a = sqrt(m);
		b = 0; 
		for (k = 2; k <= a; k++)   
		{
			if (k == i1)
				break;
			if (i1 % k == 0)
				b = b + 1;
		}
		if (b == 0)
		{
			i2 = m - i1;
			b = 0;
            for (k = 2; k <= a; k++)   
			{
				if (k == i2)
					break;
		 		if (i2 % k == 0)
					b = b + 1;
			}
		}
		if (b == 0)
			cout << i1 << " " << i2 << endl;
	}
	return 0;
}

