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
	char s[300], *p, sub[50], *q, *c, rep[50];
	cin >> s >> sub >> rep;
	int len = strlen(sub);
	p = s;
	q = sub;
	c = strstr(p, q);
	if (c == NULL)
	{
		cout << s << endl;
	}
	else
	{
		for (p; p < c; p++)
		{
			cout << *p;
		}
		cout << rep;
		for (p = c + len; *p != '\0'; p++)
		{
			cout << *p;
		}
	}
	cout << endl;
	return 0;
}