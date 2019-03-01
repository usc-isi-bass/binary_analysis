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
	char buf[32];
	gets(buf);
	int offset = 0;
	char c;
	while (offset < strlen(buf)) {
		c = *(buf+offset);
		if ('0' <= c && c <= '9') {
			cout << c;
		} else {
			cout << endl;
		}
		++offset;
	}
	return 0;
}