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
	char *p, a[100];
	int leap = 0;
	p = a;
	do
	{
		cin.get(*p);
		if (*p != ' ')
		{
			cout << *p;
			leap = 0;
		}
		if (*p == ' ' && leap == 0)
		{
			cout << *p;
			leap = 1;
		}
	}while (*p++ != '\n');
	cout << endl;
	return 0;
}