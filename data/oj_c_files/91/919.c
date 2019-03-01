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


int main()
{
	char a[105], * p, x;
	int i = 0;
	gets(a);
	p = a;
	x = * p;
	for(i = 0; * (p + i + 1) != '\0'; i++)
	    * (p + i) += * (p + i + 1);
	* (p + i) += x;
	cout << a;

	return 0;
}