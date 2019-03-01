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
 * 006.cpp
 *
 *  Created on: 2012-11-24
 *      Author: asus
 */
int common(int x, int y)//??common??
{
	if(x > y) return common(x / 2, y);//???????????2
	if(x < y) return common(x, y / 2);
	return x;//?????
}

int main()//???
{
	int m = 0, n = 0;
	cin >> m >> n;
	cout << common(m, n) << endl;//????
	return 0;
}