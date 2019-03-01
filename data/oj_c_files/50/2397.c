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
	int w = 0;
	int i = 0;
	int day = 13;
	int monthDiffer[12] = { 0, 31, 28, 31, 30, 31, 
										30, 31, 31, 30, 31, 30 };
	scanf("%d", &w);

	w = (day - 1 + w) % 7;	// 0???????
	for(i=0; i < 12; i++)
	{
		w = (w + monthDiffer[i]) % 7;
		if(w == 5)
			printf("%d\n", i+1);
	}

	return 0;
}