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
	int n;
	scanf("%d",&n);
	for(;;)
	{   
		if(n==1) break;
		if(n%2==1)
		{
		   
		   printf("%d*3+1=%d",n,n*3+1);
		   n=n*3+1;
		}
		    
		else 
		{
			printf("%d/2=%d",n,n/2);
			n=n/2;
		}	
		printf("\n");
		
	}
	printf("End");
}