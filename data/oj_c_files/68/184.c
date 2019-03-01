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

int main(int argc, char* argv[])
{
	int m = 6, n, even = 6, odd;
	int su(int x);
	scanf("%d", &n);
    while(m <= n)
	{
		odd = 3;
		while(odd < m)
		{
			if(su(odd) == 1)
			{
				if(su(m - odd) == 1)
				{
					printf("%d=%d+%d\n", m, odd, m - odd);
					break;
				}
				else
					odd += 2;
			}
			else
				odd += 2;
		}
	    m += 2;
	}
    return 0;
}

int su(int x)
{
	int i;
	for(i=3;i<=sqrt(x)+1;i+=2)
	{
		if(x%i == 0)
		{
			return 0;
		}

	}
    return 1;
}
