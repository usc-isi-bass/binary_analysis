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
	int i, n, s;
	s = 0;
	cin >> n;
	for (i = 1; i <= n; i = i + 1)
	{
		if (i % 7 == 0)
		s = s;
	else if (i % 10 == 7)
			s = s;
		else if (7 <= (i / 10) && (i / 10)< 8)
		s = s;
    else 
		s = s + i * i;
	}
	cout << s << endl;
	return 0;
}

