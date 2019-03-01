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
	int n,j,k;
	long int i;
	scanf("%d",&n);
	for(i=1;i<=10000000;i++)
	{
		if(n==1)
			break;
		else
		{
			if(n%2==0)
			{
				j=n;
				k=j/2;
				printf("%d/2=%d\n",j,k);
				n=k;
			}
			else
			{
				j=n;
				k=j*3+1;
				printf("%d*3+1=%d\n",j,k);
				n=k;
			}
		}
	}
	printf("End\n");
	return 0;
}