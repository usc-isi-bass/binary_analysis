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

int main ()
{
    int n,x,y,z,w,t;
    scanf("%d",&n);
    if(n<=9)
        printf("%d",n);
    else
    {    
        x=n%10;
        if(n<=99)
	{    
	    y=(n-x)/10;
            printf("%d%d",x,y);
	}
        else
        {    
            y=((n-x)/10)%10;
            t=x+10*y;
            if(n<=999)
	    {    
	        z=(n-t)/100;
                printf("%d%d%d",x,y,z);
	    }
            else
            {    
                z=((n-t)/100)%10;
                t=x+10*y+100*z;
                if(n<=9999)
		{     
	            w=(n-t)/1000;
                    printf("%d%d%d%d",x,y,z,w);
		}
            	else
                    printf("00001");
            }
        }
     }
     return 0;
}