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
    int x,y,a,b,flag=1;
    scanf("%d %d",&x,&y);
    for(b=y;b>=1;b=b/2)
    {
    	for(a=x;a>=1;a=a/2)
        {
        	if(a==b) 
        	{
        		if(flag==1)
        		{
        			printf("%d",a);
        			flag=0;
        		}
        	}
        }
    }
    
}