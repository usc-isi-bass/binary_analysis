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
 * BrotherCharaters.cpp
 *  ???????
 *  Created on: 2013-12-5
 *      Author: 111
 */

int main()
{
char str[102];
gets(str);
char *p = NULL;
for (p=str;p<str+strlen(str)-1;p++)              //??strlen??????????char???????????????
cout << (char)(*p+*(p+1));
cout << (char)(str[0]+str[strlen(str)-1]);       //??????????????
	return 0;
}
