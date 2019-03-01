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


int main() {
	char str[201];
	gets(str);
	int i, l = strlen(str);
	for (i = 0; i < l; i++) {
		if (!(i > 0 && *(str+i) == ' ' && *(str+i-1) == ' ')) {
			printf("%c", *(str+i));
		}
	}
	return 0;
}