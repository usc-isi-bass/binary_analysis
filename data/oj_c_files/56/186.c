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


int main () 
{
	long n;
	int a[5];
	scanf("%ld", &n);

	int m = (int)log10(n);
	int i;	
	for (i = 0; i <= m; i++)
	{
		a[i] = n  % 10;
		n = n / 10;
	}
	for(i = 0; i <= m; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}
