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
	int n;
	scanf("%d", &n);
	int i, t, x, max, secondmax;
	scanf("%d", &t);
	max=secondmax=t;
	for (i=1;i<n;i++)
	{
		scanf("%d", &x);
		
		if (x>max)
		{
			secondmax=max;
			max=x;
			}
		else if(x>secondmax)
		{
			secondmax=x;

		}
	}printf("%d\n%d\n", max, secondmax);
	return 0;
}