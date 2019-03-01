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
	int mm[3] = {3, 5, 7};
	int flag[3] = {0};
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < 3; i++)
	{
		if (n % mm[i] == 0)
			flag[i] = 1;
	}
	int space = -1;
	for (i = 0; i < 3; i++)
	{
		if (flag[i] == 1)
		{
			space ++;
			if (space == 0)
				printf("%d", mm[i]);
			else
				printf(" %d", mm[i]);
		}
	}
	if(space == -1)
		printf("n");
	printf("\n");
}