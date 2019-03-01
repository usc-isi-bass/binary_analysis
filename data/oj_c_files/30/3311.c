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
	int n, i, b;
	int sum=0;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		b=i/10;
		if(i%7==0||b==7||i-10*b==7)
		{
			continue;
		}
		sum += i*i;
	}
	printf("%d", sum);
	return 0;
}