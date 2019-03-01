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
	int bb(int n);
    int n;
    scanf("%d",&n);
    bb(n);
}
int bb(int n)
{
	int m;
	if(n==1)
    printf("End");
    else
    {
    	if(n%2==0)
    	{
    		printf("%d/2=%d\n",n,m=n/2);
    	}
    	else
    	{
    		printf("%d*3+1=%d\n",n,m=n*3+1);
    	}
    	bb(m);
    }
}