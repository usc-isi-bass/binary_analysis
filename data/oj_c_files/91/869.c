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
	char a[101], *pa = a, b[101], *pb = b;
	cin.getline(a, sizeof(a));
	for (pa = a; pa < a + strlen(a) - 1; pa++) *pb++ = *pa + *(pa + 1);
	*pb++ = *pa + *a;
	*pb = '\0';
	cout << b << endl;
	return 0;
}
