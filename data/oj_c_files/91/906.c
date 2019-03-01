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
	char a[102], b[102];
	cin.getline(a, 101);
	char *p = a, *q = b;
	int i = strlen(a), j = 0;
	for (j = 0; j < i - 1; j++)
	{
		*q = *p + *(++p);
		q++;
	}
	b[i - 1] = a[0] + a[i - 1];
	q = b;
	for (j = 0; j < i; j++)
	{
		cout << *q;
		q++;
	}
	cout << endl;
	return 0;
}