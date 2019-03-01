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
	char s[100], w[100];
	int i, j;
	int l1, l2;
	scanf("%s", &s);
	scanf("%s", &w);
	l1 = strlen(s);
	l2 = strlen(w);
	for (i = 0; i < l2 - l1 + 1; i++)
	{
		int flag = 1;
		for (j = 0; j < l1 - 1; j++)
		{
			if (w[i + j] != s[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d", i);
			break;
		}
	}
	putchar('\n');
	return 0;
}