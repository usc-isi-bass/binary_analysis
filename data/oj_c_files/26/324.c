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
	char a[101], *p = a;
	cin.getline(a, 101);
	while (*p != '\0')
	{
		cout << *p;
		if (*p == ' ')
		{
			while (*++p == ' ')
			{
			}
			p--;
		}
		p++;
	}
	return 0;
}