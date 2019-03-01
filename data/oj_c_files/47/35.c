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
	int n, i = 0, a[10000];
	scanf("%d",&n);
	printf("\n");
	for(i = 0; i < n; i++)
	scanf("%d",&a[i]);
	for(i = n - 1 ; i > 0; i--)
		printf ("%d ",a[i]);
		printf("%d\n",a[0]);



	return 0;
}