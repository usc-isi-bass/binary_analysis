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
 * ways.cpp
 *
 *  Created on: 2013-11-24
 *      Author: Mac
 */


int factor(int a, int f)
{
	if(a == f)
		return 1;
	if (a < f)
		return 0;
	if(a%f == 0)
		return factor(a, f+1) + factor(a/f, f);
	else return factor(a, f+1);
}

int main()
{
	int x, a;
	cin >> x;
	while(x > 0)
	{
		cin >> a;
		cout << factor(a, 2) << endl;
		x --;
	}
}
