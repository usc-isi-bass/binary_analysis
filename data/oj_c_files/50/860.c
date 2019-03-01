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
	int w,a,b,d[13],i,j;
	
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	scanf("%d",&w);
	for(i=1;i<=12;i++)
	{
        d[i]=0;
        for(j=1;j<i;j++)
        {
            d[i]=d[i]+m[j];
        }
        d[i]=d[i]+13;
        a=(d[i]+w-2)%7+1;
        if(a==5)
            printf("%d\n",i);
    }
    
} 