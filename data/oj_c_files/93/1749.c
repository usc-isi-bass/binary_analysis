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
	int x,i;
	scanf("%d",&x);
    if(x%3==0)
	{printf("%d",3);
	for(i=5;i<=7;i=i+2)
		if(x%i==0)
		{printf(" %d",i);}
	}
	else
	{if(x%5==0)
		{printf("%d",5);
	     if(x%7==0)printf(" %d",7);}
	else if(x%7==0)printf("%d",7);}
		
        if(x%3!=0&&x%5!=0&&x%7!=0)
			printf("n");
		printf("\n");
}