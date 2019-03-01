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
	int m,i,n;
	scanf("%d",&m);
	for (i=0;;i++)
	{
		if (m==1)
		{
			break;
		}
		else if (m%2==1)
		{
			n=m*3+1;
			printf("%d*3+1=%d\n",m,n);
			m=n;
			if (m==1)
			{
				break;
			}
		}
		else
		{
			n=m/2;
			printf("%d/2=%d\n",m,n);
			m=n;
			if (m==1)
			{
				break;
			}

		}
	}
	printf("End");
	
	return 0;


}
