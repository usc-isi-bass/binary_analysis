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
	int a, max=0, inf=0;
	char c;
	do {
		scanf("%d", &a);
		scanf("%c", &c);
		if (a>max) {
			inf=max;
			max=a;
		}
		else if (a==max) {}
		else if (a>=inf) {
			inf=a;
		}
	}while (c==',');
	if (max==inf) {
		printf("No");
	} 
	else if (inf==0) {
		printf("No");
	}
	else {
		printf("%d", inf);
	}
	return 0;
}
