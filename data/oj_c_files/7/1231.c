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
	char str[256];
	char sub[256];
	char rep[256];
	cin >> str >> sub >> rep;
	int len = strlen(sub);
	int i = 0;
	char *p, *q, *r;
	p = strstr(str, sub);
	q = rep;
	if (p != NULL)
	{
	for (r = p; r < p + len; r++)
		*r = *q++;
	}
	cout << str << endl;
	return 0;
}
	