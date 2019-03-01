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
 * file    homework 11_3
 * author  ??
 * date    2010-12-09
 * description
           ???????????
*/



int main()
{
	char str[31];
	char *p;
	cin.getline(str, 31);
	p = str;
	while (*p != '\0')
	{
		while ((*p > '9' || *p < '0') && *p != '\0')
			p++;
		if (*p == '\0')
			break;
		while (*p <= '9' && *p >= '0')
		{
			cout << *p;
			p++;
		}
		cout << endl;
	}
	return 0;
}
