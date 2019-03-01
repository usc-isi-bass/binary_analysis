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
 * SpaceFilter22.cpp
 *
 *  Created on: 2013-12-5
 *      Author: 111
 */

int main()
{
	char str[201];
	char *p = NULL;
	gets(str);                                //????
	cout << str[0];                           //????????
	for (p=str+1;p<str+strlen(str);p++)
	{
		if (*p!=' '||(*(p-1)!=' '))           //???????????????????????
			cout << *p;
	}
	return 0;
}
