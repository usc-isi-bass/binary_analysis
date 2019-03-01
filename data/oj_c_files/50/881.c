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


int Month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int D;
	scanf ("%d", &D);D --;
	for (int i = 0; i < 12; i ++)
		for (int j = 1; j <= Month[i]; j ++)
		{
			D ++;
			if (D % 7 == 5 && j == 13) printf ("%d\n", i + 1);
		}
	return 0;
}
