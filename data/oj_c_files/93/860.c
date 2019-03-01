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
    int x;
	int a,b,c;
	int k;
	k=0;
	scanf("%d",&x);
    a=x%3;
	b=x%5;
	c=x%7;
	if(a==0)
	{
		printf("3");
		k=1;
	}

    if(b==0)
	{
		if (k==1)
			printf(" ");
		printf("5");
		k=1;
	}

	if(c==0)
	{if(k==1)
	    printf(" ");
     printf("7");
	 		k=1;
	}
	if (k!=1)
		printf("n");
        	return 0;

}
