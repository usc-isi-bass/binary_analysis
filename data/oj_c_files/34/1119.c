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
	int a,A;
	scanf("%d",&a);
	if(a==1)
	{
		printf("End");
	}
	else
	{
		while(A!=1)
		{
			if(a%2==0)
			{
				A=a/2;
				printf("%d/2=%d\n",a,A);
			}
			if(a%2!=0)
			{
				A=a*3+1;
				printf("%d*3+1=%d\n",a,A);
			}
			a=A;
		}
		printf("End");
	}
	return 0;
}
	
	

