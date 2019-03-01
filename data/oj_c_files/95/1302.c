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


void toLowerCase(char *s) {
	while (*s) {
		if (isupper(*s))
			*s = 'a' + *s - 'A';
		s++;
	}
}
int main() {
	char s1[128];
	char s2[128];
	gets(s1);
	gets(s2);
	toLowerCase(s1);
	toLowerCase(s2);
	int res = strcmp(s1, s2);
	if (res < 0)
		printf("<");
	else if (res == 0)
		printf("=");
	else
		printf(">");
}
