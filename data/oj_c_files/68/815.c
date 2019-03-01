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
    int a,b,c,i,n;
    scanf("%d",&n);
    for(i=6;i<=n;i=i+2)
    {
    	a=i-3;
    	b=3;
    	while(b<=sqrt(a))
    	{
    		if(a%b==0||(i-a)%b==0&&(i-a)!=b)
    		{
    		b=3;
    		a=a-2;
    		}
    		else 
    		b=b+2;
    	}
    	printf("%d=%d+%d\n",i,i-a,a);
    }
}