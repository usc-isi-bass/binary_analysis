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
	char str[32];
	cin.getline(str, 33);
	int len = strlen(str), i, j, k;
	for (i = 0; i < len; i++)
		if (*(str + i) >= '0' && str[i] <= '9') { //?????????????????????
			for (j = 1; *(str + i + j) >= '0' && *(str + i + j) <= '9'; j++)
				;
			for (k = 0; k < j; k++)
				cout << *(str + i + k);
			cout << endl;
			i += j - 1;
		}
	return 0;
}