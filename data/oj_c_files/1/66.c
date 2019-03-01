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


int N, A;

int acSearch(int n, int i) {
	int ret = 0;

	if(n == 1) ret = 1;
	else for(; i <= n; ++ i)
		if(n%i == 0) ret += acSearch(n/i, i);

	return ret;
}

int main() {
	scanf("%d", &N);
	for(; N --;) {
		scanf("%d", &A);
		printf("%d\n", acSearch(A, 2));
	}
	return 0;
}
