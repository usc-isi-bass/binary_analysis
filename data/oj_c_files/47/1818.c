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
 * sznx.cpp
 * ????
 *  Created on: 2012-12-10
 *      Author: Salforever
 */

int main()
{
	int *p,n,i,x[105];
	cin >> n;
	for (i=1;i<=n;i++)
	{
		cin >> x[i];
	}
	p=&x[n];//??????????
	cout << *p;//??????????????
	p--;
	n--;
	while (n>0)
	{
		cout << ' ' << *p;//?????????????????
		p--;
		n--;
	}
	return 0;//????
}
