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
	int n,i,j,t=0;
    scanf("%d",&n);
    for(i=1;i<=3;i++)
	{
		j=2*i+1;
		if(n%j==0) 
		{
			if(t>0) 
				printf(" ");
			printf("%d",j);
			t++;			
		}
	}
	if(t==0)
	printf("n");
	printf("\n");
}
