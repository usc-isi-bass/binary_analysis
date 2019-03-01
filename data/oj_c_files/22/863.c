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
	int a, b=-1, c, r;
	char e;
	scanf("%d%c", &a, &e);
	r = a;
	if (e == 10)
		printf("No");
	else
	{
		while (e == 44)
		{
			scanf("%d%c", &c, &e);
			if (c > b&&c < a)
				b = c;
			else if (c > a)
			{
				b = a;
				a = c;
			}
		}
		if (a == r&&b == r || b == -1)
			printf("No");
		else
			printf("%d", b);
	}
}