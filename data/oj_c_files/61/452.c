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
	int one = 1, two = 1;
	int count;
	int num;
	int i;
	int sum;
	scanf("%d", &count);
	while (count --) {
		scanf("%d", &num);
		if (num == 1 || num == 2) {
			printf("1\n");
			continue;
		}
		num -= 2;
		one = 1, two = 1;
		sum = 0;
		for (i = 0; i < num; i ++) {
			sum = one + two;
			one = two;
			two = sum;
		}
		printf("%d\n", sum);
	}
	return 0;
}