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
	int i = 0, j;
	char s[101], a[101], *p;
	cin.getline (s, 101);
	p = s + 1;
	for(; *p != '\0'; p++)
	{
		a[i] = *p + *(p - 1);
		i++;
	}
	a[i] = *(p - 1) + s[0];
	for(j = 0; j <= i; j++)
		cout << a[j];
	return 0;
}
	