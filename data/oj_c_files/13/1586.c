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


	int n;
	scanf("%d", &n);

	int visit[101] = {0};

	int i;
	for(i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		if(visit[num] == 1) {

		} else {
			if(i != 0) {
				printf(" ");
			}
			printf("%d", num);
			visit[num] = 1;
		}
	}
	printf("\n");


	return 0;
}
