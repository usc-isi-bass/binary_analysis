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

int n;

int main()
{
	scanf("%d",&n);
	while (n%2==1)
	{
		if(n==1)
		{
			printf("End");
			break;
		}
		printf("%d*3+1=",n);
		n=n*3+1;
		printf("%d\n",n);
		while(n%2==0)
		{
			printf("%d/2=",n);
			n=n/2;
			printf("%d\n",n);
		}
		if(n==1)
		{
			printf("End");
			break;
		}
	}
	while (n%2==0)
	{
		printf("%d/2=",n);
		n=n/2;
		printf("%d\n",n);
		if(n==1)
		{
			printf("End");
			break;
		}
		while (n%2==1)
		{
			printf("%d*3+1=",n);
			n=n*3+1;
			printf("%d\n",n);
		
	
		}
	}
	return 0;
}