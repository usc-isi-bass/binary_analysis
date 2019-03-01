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


const int MAX_N = 1000;
int n, w[MAX_N], t[MAX_N];

int cmpInt(const void * a, const void * b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	while (scanf("%d", &n), n)
	{
		for (int i = 0; i < n; ++i)
			scanf("%d", t + i);
		for (int i = 0; i < n; ++i)
			scanf("%d", w + i);
		qsort(t, n, sizeof(int), cmpInt);
		qsort(w, n, sizeof(int), cmpInt);

		int win = INT_MIN;
		for (int i = 0; i < n; ++i)
		{
			int twin = 0;
			for (int j = 0; j < n; ++j)
				if (t[j] > w[(i + j) % n])
					twin += 200;
				else if (t[j] < w[(i + j) % n])
					twin -= 200;
			if (twin > win)
				win = twin;
		}
		printf("%d\n", win);
	}
	return 0;
}