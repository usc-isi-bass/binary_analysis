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
	char a[110], b[110];
	int i;
	gets( a);
	for(i = 0; a[i + 1] != '\0'; i++)
		b[i] = a[i] + a[i + 1];
	b[i] = a[i] + a[0];
	b[i + 1] = '\0';
	puts(b);
	return 0;
}