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
	int n;
	int g1[100000] = {0};
	int g2[100000] = {0};
	int i, j;
	scanf("%d", &n);
	while (scanf("%d%d", &i, &j), i != 0 || j != 0)
	{
		g1[i]++;
		g2[j]++;
	}
	for (i = 0; i < n; i ++)
		if (g1[i] == 0 && g2[i] == n - 1)
		{
			printf("%d", i);
			break;
		}
	if (i == n)
	printf("NOT FOUND\n");
	return 0;
}
