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
    int app(int x,int y);
    int s, x, y, i;
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
                     scanf("%d%d",&x,&y);
                     printf("%d\n",app(x,y));
    }
    return 0;
}
    
    
    
    
    
int app(int x,int y)
{
    if(x<y&&y!=1)
    {
         return app(x,y-1);
    }
    else if(y==1) 
    {
         return 1;
    }
    else
    {
         return (app(x,y-1)+app(x-y,y));
    }
}