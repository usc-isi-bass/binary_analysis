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
    int m,k,n,k1,i,b,x;
    scanf("%d %d",&n,&k);
    for(m=1;1;m++)
    {
    	b=0;
    	x=m;
    	for(i=1;i<=n;i++)
    	{
    		k1=x%n;
    		x=(x/n)*(n-1);
    		if (k1!=k||x==0)
    		{
    			b=1;
    			break;
    		}
    	}
        if(b==0) 
        {
    	    printf("%d\n",m);
    	    break;
        }
    }
}