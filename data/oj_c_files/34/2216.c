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
	int n,a,b,i;
	scanf("%d",&n);
	for(i=0;;i++)
	{
		if(n==1) break;
		if(n%2==0)
		{
			n=n/2;
			printf("%d/2=%d\n",2*n,n);
		}
		else
		{
			n=n*3+1;
			printf("%d*3+1=%d\n",(n-1)/3,n);
		}
	}
	printf("End\n");
	return 0;
}
