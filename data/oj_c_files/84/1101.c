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
	int max,max2,n,now;
	scanf("%d",&n);
	max=max2=-10000;
	while (n-->0)
	{
		scanf("%d",&now);
		if (now>max) 
		{
			max2=max;
			max=now;
		}
		else
			if (now==max) max2=max;
				else
					if (now>max2) max2=now;
	}
	printf("%d\n%d",max,max2);
	return 0;
}