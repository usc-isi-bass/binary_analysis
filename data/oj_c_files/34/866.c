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

int xx(int k);
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n==1)
		printf("End");
	else
	{
		for(i=n;i>1;i=xx(i))
		{
			if(i%2==0)
			{
				
				printf("%d/2=%d\n",i,i/2);
			}
			if(i%2==1)
			{
				
				printf("%d*3+1=%d\n",i,i*3+1);
			}
		}
		printf("End");
	}
	return 0;
}
int xx(int k)
{
	int c;
	if(k%2==0)
		{
			c=k/2;
			
		}
		if(k%2==1)
		{
			c=k*3+1;
			
		}
		return c;
}