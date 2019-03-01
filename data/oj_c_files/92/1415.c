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

int myfunc(const void *a, const void *b)
{
	return *(int *)a-*(int *)b;
}
int max(int a, int b)
{
	return a>b?a:b;
}
int main()
{
	int t[2000];
	int q[1000];
	int n;
	int i, start;
	int sum, tmp;
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;
		for (i = 0; i < n; i ++)
			scanf("%d", t+i);
		for (i = 0; i < n; i ++)
			scanf("%d", q+i);
		qsort(t, n, sizeof(int), myfunc);
		qsort(q, n, sizeof(int), myfunc);
		memcpy(t+n, t, n);
		sum = -0xFFFFFFF;
		for (start = 0; start < n; start ++) {
			tmp = 0;
			for (i = 0; i < n; i ++) {
				if (t[start+i] < q[i])
					tmp -= 200;
				if (t[start+i] > q[i])
					tmp += 200;
			}
			sum = max(sum, tmp);
		}
		printf("%d\n", sum);
	}
	return 0;
}