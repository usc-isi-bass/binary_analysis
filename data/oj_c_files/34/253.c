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

int main ()
{
	int a,b,c,i;
	scanf("%d",&a);
	for (i=1;a!=1;i++)
	{
		if (a%2==0)
		{   b=a/2;
            printf("%d/2=%d\n",a,b);
			a=b;
			continue;
		}
		else if (a!=1)
			{
			c=a*3+1;
			 printf("%d*3+1=%d\n",a,c);
			 a=c;
		}
		else
			break;
	}
	printf("End\n");
	return 0;
}