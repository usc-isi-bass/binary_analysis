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
 * yidongshuzu.cpp
 *
 *  Created on: 2011-12-9
 *      Author: Dai Guangda
 */
int main()
{
	int n,m,a[200],*p;
	cin >>n >>m;
	for (p=a; p<a+n; p++)
		cin >>*p;
	for (p=a+n-1; p>=a; p--)
		*(p+m) = *p;
	for (p=a; p<a+m; p++)
		*p = *(p+n);
	for (p=a; p<a+n-1; p++)
		cout <<*p <<' ';
	cout <<*p;
	return 0;
}
