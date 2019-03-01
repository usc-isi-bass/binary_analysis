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
	int t=0;
	scanf("%d",&n);
	while(n!=1)
	{
		if (n%2==1)
		{
			t++;
			int e=n;
			n=3*n+1;
			if (t==1)
			{
				printf("%d*3+1=%d",e,n);
			}
			else if (t>1)
			{
				printf("\n%d*3+1=%d",e,n);
			}
			
		}
		else
		{
			t++;
			int e=n;
			n=n/2;
			if (t==1)
			{
				printf("%d/2=%d",e,n);
			}
			else if (t>1)
			{
				printf("\n%d/2=%d",e,n);
			}
		}
	}
	printf("\nEnd");
	
	
	return 0;

}



