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
	int n,i,x,y,a;
	scanf("%d",&n);
	x=0;
	y=0;
	scanf("%d",&a);
	y=a;
	for (i=2;i<=n;i++)
	{
		int ai;
		scanf("%d\n",&ai);
		if (ai>=x)
		{
			x=ai;
		}
		else
		{
			if (ai>y)
			{
				y=ai;
			}
		}
	}
	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
}

