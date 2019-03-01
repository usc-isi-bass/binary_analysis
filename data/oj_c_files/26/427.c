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

main()
{
	char a[1000],*b;
	gets(a);
	for (b = a;*b != 0;b++)
		if(!(*b == ' ' && *(b - 1) == ' '))
			printf("%c",*b);
	printf("\n");
	getchar();
}
