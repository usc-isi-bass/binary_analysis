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
	{
		for(int b = 1; b <= 5; b++)
		{
			for(int c = 1; c <= 5; c++)
			{
				for(int d = 1; d <= 5; d++)
				{
					for(int e = 1; e <= 5; e++)
					{
						int ta, tb, tc, td, te, t;
						ta = (e == 1);
						tb = (b == 2);
						tc = (a == 5);
						td = (c != 1);
						te = (d == 1); //??? 
						t = (e != 2) + (e != 3);
						if((((t == 2 && ta == 1 && tb == 1 && tc == 0 && td == 0 && te == 0) && (((a == 1) && (b == 2)) || ((a == 2) && (b == 1)))) || 
						((t == 2 && ta == 1 && tc == 1 && tb == 0 && td == 0 && te == 0) && (((a == 1) && (c == 2)) || ((a == 2) && (c == 1)))) ||
						(t == 2 && ta == 1 && td == 1 && tc == 0 && tb == 0 && te == 0 && (((a == 1) && (d == 2)) || ((a == 2) && (d == 1)))) ||
						(t == 2 && tb == 1 && tc == 1 && ta == 0 && td == 0 && te == 0 && (((b == 1) && (c == 2)) || ((b == 2) && (c == 1)))) ||
						(t == 2 && tb == 1 && td == 1 && tc == 0 && ta == 0 && te == 0 && (((b == 1) && (d == 2)) || ((b == 2) && (d == 1)))) ||
						(t == 2 && tc == 1 && td == 1 && ta == 0 && tb == 0 && te == 0 && (((c == 1) && (d == 2)) || ((c == 2) && (d == 1))))) &&
						((a != b) && (a != c) && (a != d) && (a != e) &&
						(b != c) && (b != d) && (b != e) &&
						(c != d) && (c != e) && (d != e)))
							cout << a << " " << b << " " << c << " " << d << " " << e;
					}
				}
			}
		}
	}
	return 0;
}
