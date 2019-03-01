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
	int n = 0;
	int a = 0;
	int i = 0;
	int tmp1 = 1;
	int tmp2 = 1;
	int tmp;

	scanf("%d", &n);

	while (n--) {
		scanf("%d", &a);

		if (a <= 2) {
			printf("1\n");
		}
		else {
			for (i = 2; i < a; i++) {
				tmp = tmp2;
				tmp2 = tmp1 + tmp2;
				tmp1 = tmp;
			}
			printf("%d\n", tmp2);
		}
		tmp1 = 1;
		tmp2 = 1;
	}
	return 0;
}