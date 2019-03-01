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


int main ()
{
	char str[101], str1[101];
	cin.getline(str, 101);
	char *p = &str[1], *q = str1;
	while (*p != '\0')
	{
		*q = *p + *(p - 1);
		p++ ;
		q++ ;
	}
	*q = str[0] + *(p - 1);
	*(q + 1) = '\0';
	cout << str1 << endl;

	return 0;
}