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
    int x,y,x0,y0,result,flag=0;
    
    scanf("%d %d",&x,&y);
    
    x0=x;y0=y;
    for (x=x0;x>=1;x/=2)
        for (y=y0;y>=1;y/=2)
            if (x==y&&flag==0)
            {
               result=x;
               flag=1;
            }
    
    printf("%d\n",result);
    getchar();getchar();
    
    return 0;
    
}
