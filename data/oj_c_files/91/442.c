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
	char s[102] = { "\0" }, s1[102] = { "\0" };
	int i, l;
	gets(s);
	l = strlen(s);
	for (i = 0; i < l - 1; i++)
		s1[i] = s[i] + s[i + 1];
	s1[i] = s[i] + s[0];
	for (i = 0; i < l; i++)
		printf("%c", s1[i]);
	return 0;
}