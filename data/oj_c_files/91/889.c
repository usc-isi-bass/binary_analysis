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


void friends(char *p, int len)
{
	int i;
	char  m = *p;
	for (i = 0; i < len - 1; i++)
		*(p + i) += *(p + i + 1);
	*(p + len - 1) += m;
}

int main()
{
	char a[105];
	cin.getline(a,101);
	int len = strlen(a);
	friends(a, len);
	cout << a << endl;
	return 0;
}