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
	int n, k, i, a[1000], j, q;
	scanf("%d%d", &n, &k);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			q = a[i] + a[j];
			if (q == k)
				break;
			else
				q = 0;
		}
		if (q == k)
			break;
	}
	if (q == k)
		printf("yes");
	else
		printf("no");
	return 0;
}