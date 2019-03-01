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
	int n,i,j;
	scanf("%d",&n);
	while(1)
	{		
		while(n%2==0)
		{printf("%d/%d=%d\n",n,2,n/2);
		n=n/2;}
		if(n==1) break;
		else
		{
			printf("%d*%d+%d=%d\n",n,3,1,(n*3+1));
			n=n*3+1;
		}
	}
	printf("End\n");
}