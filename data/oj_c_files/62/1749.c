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
	int i;
	char *p, *q;
	char ju[100];
	cin.getline(ju, 99);
	p = ju;
	q = ju;
	while (*p != 0)
	{
		if (*p == ' ')
		{
			if (*(p - 1) == ' ' || *(p - 1) == 0)
				*p = 0;
		}
		p++;
	}
	for (i = 0; i < p-q; i++)
	{
		if (ju[i] != 0)
		{
			cout << ju[i];
		}
	}
	return 0;
}
