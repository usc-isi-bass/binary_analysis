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
	for(int a = 1; a <= 5; a++)
		for(int b = 1; b <= 5; b++)
			if(b != a)
				for(int c = 1; c <= 5; c++)
					if(c != b && c != a)
						for(int d = 1; d <= 5; d++)
							if((d - a) * (d - b) * (d - c))
							{
								int e = 15 - a - b - c - d;
								if(e == 2 || e == 3)
									continue;
								else if((((a == 1) && (e == 1)) || ((a == 2) && (e == 1)) || ((a == 3) && !(e == 1)) || ((a == 4) && !(e == 1)) || ((a == 5) && !(e == 1)))
									&& (((b == 1) && (b == 2)) || ((b == 2) && (b == 2)) || ((b == 3) && !(b == 2)) || ((b == 4) && !(b == 2)) || ((b == 5) && !(b == 2)))
									&& (((c == 1) && (a == 5)) || ((c == 2) && (a == 5)) || ((c == 3) && !(a == 5)) || ((c == 4) && !(a == 5)) || ((c == 5) && !(a == 5)))
									&& (((d == 1) && (c != 1)) || ((d == 2) && (c != 1)) || ((d == 3) && !(c != 1)) || ((d == 4) && !(c != 1)) || ((d == 5) && !(c != 1)))
									&& (((e == 1) && (d == 1)) || ((e == 2) && (d == 1)) || ((e == 3) && !(d == 1)) || ((e == 4) && !(d == 1)) || ((e == 5) && !(d == 1))))
								{
									cout << a << " " << b << " " << c << " " << d << " " << e << endl;
									return 0;
								}
							}
	return 0;
}