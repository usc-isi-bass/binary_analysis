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
	int max=0,submax=0,i,n,x;
	scanf("%d/n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
	if (i==0)
	{
		max=x;
		submax=x;
		
	}
	else if(i==1)
	{
		if(x>max)
		{
			submax=max;
			max=x;
		}
		else 
		{
			submax=x;
		}
	}
	else 
		{
		if(x>max)
		{
			submax=max;
			max=x;
		}
	else if(x>submax)
		{
			submax=x;
		}

	}
	}
    printf("%d\n",max);
	printf("%d\n",submax);
	return 0;
}