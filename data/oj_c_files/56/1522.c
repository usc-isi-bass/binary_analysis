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

void main()
{
	int b;
    long n;
	scanf("%d",&n);
	while(n>9)
	{
		b=n%10;
		printf("%d",b);
		n=n/10;
	}
	printf("%d\n",n);
}
	