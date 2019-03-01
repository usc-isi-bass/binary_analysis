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

char str[105];
int main() {
	cin.getline(str,sizeof(str));
	char b = *str;
	char * p = str;
	while (*(p + 1)) {
		cout << (char) (*p + *(p + 1));
		p++;
	}
	cout << (char) (*p + b);
	return 0;
}
