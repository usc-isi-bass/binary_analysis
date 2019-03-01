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
	int n, x[5], i=0, j;
	scanf("%d", &n);
	while(n!=0)
	{
		x[i]=n%10;
		n=n/10;
		i++;
	}
	n=0;
	for(j=0;j<i;j++)
	{
		n+=x[j];
		n=n*10;
	}
	n=n/10;
	printf("%d\n", n);
	return 0;
}