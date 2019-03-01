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
	char a[100], i = 0, j;
	while (cin.get(a[i]))
	{
		if (a[i] == '\n')
			break;
		if ((a[i] == a[i - 1]) && (a[i] == 32))
			i--;
		i++;
	}
	for (j = 0; j <= i; j++)
		cout << a[j];
return 0;
}