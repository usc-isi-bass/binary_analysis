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
	char a[200], *p;
	int b1, b2, t;
	cin.getline (a, 200);
	t = a[0];
	for (p = a + 1; *p != '\0'; p++)
	{
		b1 = *(p - 1);
		b2 = *p;
		*(p - 1) = b1 + b2;
	}
	b1 = *(p - 1);
	*(p - 1) = b1 + t;
	for (p = a; *p != '\0'; p++)
		cout << *p;
	cout << endl;

	return 0;
}
