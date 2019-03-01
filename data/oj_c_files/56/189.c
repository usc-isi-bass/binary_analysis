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
	int a,b=0;
	scanf("%d",&a);
	do
	{
		b=b*10+a%10;
		a/=10;
	}
	while(a>0);
	printf("%d\n",b);
	return 0;
} 