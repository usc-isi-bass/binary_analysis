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
	char series[101];
	cin.getline(series, 102);
	char *p = series;
	char initial = *p;
	char trans[101];
	char *q = trans;
	for(; p < series + strlen(series) - 1; p++, q++)
	{
		*q = *p + *(p+1);
	}
	*q = *p + initial;
	*(q+1) = '\0';
	cout << trans << endl;
	return 0;
}