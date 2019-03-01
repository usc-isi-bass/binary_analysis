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
	int n,i,j,k,a,b;
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==1)
		{
			k=n;
			n=3*n+1;
			printf("%d*3+1=%d\n",k,n);
		}
		else
		{
			k=n;
			n/=2;
			printf("%d/2=%d\n",k,n);
		}
	}
	printf("End\n");
}