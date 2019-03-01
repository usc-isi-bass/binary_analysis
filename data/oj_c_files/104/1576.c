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
	int m, n, c;
	int mark[1010]={0};
	scanf("%d%d",&m,&n);
	while (m > 0) {
		mark[m] = 1;
		m /= 2;
	}
	while (n > 0) {
		if (mark[n] != 0) {
			printf("%d\n",n);
			break;
		}
		n /= 2;
	}
}