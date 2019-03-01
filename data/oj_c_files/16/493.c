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

int main(void)
{
	char s[20];
	int l, i;
	scanf("%s", s);
	l = strlen(s);
	for (i = l - 1; i >= 0; i--) printf("%c", s[i]);
	return 0;
}
