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
	int i, x;
	scanf("%d", &x);
	for(i=1; i<=(int)log10(x)+1; i++)
		printf("%d", (x%(int)pow(10,i))/(int)(pow(10,i-1)));
	return 0;
}