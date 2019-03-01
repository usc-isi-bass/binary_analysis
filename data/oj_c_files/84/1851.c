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
	int n;
	int A[100];
	int i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
	}
	int x,y;
	x=y=0;
	for (i=1;i<=n;i++)
	{
		if (x<=A[i])
		{
			y=x;
			x=A[i];
		}
	}

	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
}