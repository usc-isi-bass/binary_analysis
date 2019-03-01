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
 * CycleRemove.cpp
 *
 *  Created on: 2013-12-5
 *      Author: 111
 */

int main()
{
	int str[102];
	int n,m;
	cin >> n >> m;
	int *p=NULL;
	for (p=str;p<str+n;p++)
	cin >> *p;
	cout << str[n-m];
	for (p=str+n-m+1;p<str+n;p++)
		cout << ' ' << *p;
	for (p=str;p<str+n-m;p++)
		cout << ' ' << *p;
	return 0;
}
