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

/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 
* @description
*         
*/


int main()
{
	char a[101];
	cin.getline(a, 101);
	char *p = a, q = a[0];
	for(; *(p + 1) != '\0'; p++)
		*p = *p + *(p + 1);
	*p += q;
	cout << a;
	return 0;
}
