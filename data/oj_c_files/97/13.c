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
	int n, a, b, c, d, e, f;
	scanf("%d", &n);
	printf("%d\n", n / 100);
	n %= 100;
	printf("%d\n", n / 50);
	n %= 50;
	printf("%d\n", n / 20);
	n %= 20;
	printf("%d\n", n / 10);
	n %= 10;
	printf("%d\n", n / 5);
	n %= 5;
	printf("%d\n", n / 1);
	n %= 1;
	return 0;
}