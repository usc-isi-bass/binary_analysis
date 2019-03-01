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
	int m, a, b;	
	cin >> m;
    for (a = 3; a <= m / 2; a = a + 2)
	{
		int i;
		for (i = 3; i <= a; i = i + 2)
			if (a % i == 0)
				break;	
		if (i == a)
			b = m - a;	
		else 
			continue;	
		int k;
		for (k = 3; k <= b; k = k + 2)
			if (b % k == 0)
				break;	
		if (k == b)
			cout << a << " " << b << endl;	
	}
	return 0;
}
