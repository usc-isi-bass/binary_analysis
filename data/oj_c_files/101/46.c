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

// ??? ?? 1000062708
int main()
{
	char d[4] = {'A','B','C'};
	int a, b, c, ta, tb, tc;
	for(a = 1;a <= 3;a++)
		for(b = 1;b <= 3;b++)
			if(b != a)
				for(c = 1;c <= 3;c++)
					if(c != a && c != b)
					{
						ta = (b > a) + (c == a);
						tb = (a > b) + (a > c);
						tc = (c > b) + (b > a);
						if((a + ta == 3) && (b + tb == 3) && (c + tc == 3)) 
							cout << d[3 - c] << d[3 - b] << d[3 - a] << endl;
					}
	return 0;
}




