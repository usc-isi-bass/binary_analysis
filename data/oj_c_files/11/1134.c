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


int main(void)
{
	int ye, mo, da, i, sum = 0;
	int mon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	scanf("%d%d%d", &ye, &mo, &da);

	for (i = 1; i < mo; i++)
	{
		sum = sum + mon[i];
	}
	if (((ye % 400 == 0) && mo > 2) || ((ye % 4 == 0) && (ye % 100 != 0)) && mo > 2)
	{
		sum = sum + da + 1;
	}
	else
	{
		sum = sum + da;
	}

	printf("%d", sum);

	return 0;
}
