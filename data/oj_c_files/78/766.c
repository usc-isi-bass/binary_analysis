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
	int z, q, s, l;
	int C1, C2, C3;
	l = 50;
	q = 40;
	for(z = 10; z <= 30; z += 10)
		for(s = 10; s <= 30; s += 10)
		{
			C1 = (z + q) == (s + l);
			C2 = (z + l) > (s + q);
			C3 = (z + s) < q;
			if(C1&&C2&&C3&&(z != s))
				cout << "l " << l << endl << "q " << q << endl << "z " << z << endl << "s " << s << endl; 
		}
	return 0;
}