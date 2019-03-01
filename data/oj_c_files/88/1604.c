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

/**
* @file 1000012907_3.cpp
* @author ???
* @date 2010?12?11
* @description
* ??????: ???? 
*/
int main() 
{
	char str[31];
	int len, i, flag;
	char *p = str;
	gets(str);
	len = strlen(str);
	for (p = str; p < str + len; p++)
	{
		if (*p - '0' >= 0 && *p - '0' <= 9)
		{
			cout << *p;
			flag = 0;
		}
		else if (flag == 0)
		{
			cout << endl;
			flag = 1;
		}
	}
	return 0;
}