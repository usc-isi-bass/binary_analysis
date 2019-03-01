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
	int x,y;
	scanf("%d%d",&x,&y);
	while(x!=y)
	{
		if(x>=2*y)
		{
			x=x/2;
		}
		else if(y>=2*x)
		{
			y=y/2;
		}
		else
		{
			x=x/2;
			y=y/2;
		}
	}
	printf("%d",x);
	return 0;
}