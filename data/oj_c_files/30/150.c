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


int N, Sum = 0;

int main()
{
	int i, f, x;
	scanf ("%d", &N);
	for (i = 1; i <= N; i ++)
	{
		if (i % 7 == 0) continue;
		x = i; f = 1;
		while (x > 0 && f)
		{
			if (x % 10 == 7) f = 0;
			x /= 10;
		}
		if (!f) continue;
		Sum += i * i;
	}
	printf ("%d\n", Sum);

	return 0;
}

