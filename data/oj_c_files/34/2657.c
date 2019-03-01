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

void main()
{
	int n,i,j,k,r;
	scanf("%d",&n);
	while(n!=1)
	{
		r=n%2;
		if(r==0)
		{
			
			printf("%d/2=%d\n",n,n/2);
			n=n/2;
		}
		if(r!=0)
		{
			printf("%d*3+1=%d\n",n,n*3+1);
			n=n*3+1;
		}
	}
	printf("End");
}