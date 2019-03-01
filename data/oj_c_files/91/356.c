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

/*
 * relative_string.cpp
 *
 *  Created on: 2013-12-12
 *      Author: Mac
 */


int main()
{
	char a[200], b[200], *p, *q;
	memset(a, '\0', 200);
	memset(b, '\0', 200);
	p = a;
	q = b;
	gets(p);

	for(; q < b + strlen(a);q++)
	*q = *p + *(++p);

	*(q-1) = *(p-1) + *a;

	cout << b;
}
