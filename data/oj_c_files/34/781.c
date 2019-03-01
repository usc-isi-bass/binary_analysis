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
	int i,j,k,m,n;
	scanf("%d",&n);
	if(n==1)
	printf("End\n");
	else
	{
		for(i=n;i!=1;)
		{
			if(i%2==0)
			{
				j=i/2;
				printf("%d/2=%d\n",i,j);
				i=j;
			}
			else
			{
				j=i*3+1;
				printf("%d*3+1=%d\n",i,j);
				i=j;
			}
		}
		printf("End\n");
	}
}
	
				
