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
	int n,i,x;
	scanf("%d", &n);
	int first, second;
	for (i=1;i<=n;i++)
	{
		if (i<n)
		{
			scanf("%d\n", &x);
		}
		else
		{
			scanf("%d", &x);
		}
		
		if (i==1)
		{
			first=x;
		}
		else if (i==2)
		{
			if (x>first)
			{
				second=first;
				first=x;
			}
			else
			{
				second=x;
			}
		}
		else
		{
			if (x>first)
			{
				second=first;
				first=x;
			}
			else if (x>second)
			{
				second=x;
			}
		}
	}
	printf("%d\n", first);
	printf("%d\n", second);
	return 0;
}
