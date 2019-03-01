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
	int x,y;
	scanf("%d",&x);
	while(x!=1)
	{
	    if(x%2==0)
		{
	  	   y=x/2;
		   printf("%d/2=%d\n",x,y);
		   x=y;
		   continue;
		}
		if(x%2!=0)
		{
			y=x*3+1;
			printf("%d*3+1=%d\n",x,y);
			x=y;
		}
	}
	printf("End");
}


