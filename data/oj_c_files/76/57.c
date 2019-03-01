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
    int n,i,j;
    scanf("%d",&n); 
    struct region
    {
           int x;
           int y;
    }
    a[n],re;
    for(i=0;i<=n-1;i++)
    {
                       scanf("%d %d",&a[i].x,&a[i].y);
    }
    re.x=a[0].x;
    re.y=a[0].y; 
    for(j=0;j<=n-1;j++)
    {
        for(i=0;i<=n-1;i++)
        {   
            if((a[i].x<=re.x&&a[i].y>=re.x)||(a[i].x>=re.x&&a[i].x<=re.y)) 
            {
                 if(re.x>a[i].x) re.x=a[i].x;
                 if(re.y<a[i].y) re.y=a[i].y;
                 a[i]=re;
              
            }
        }
    }
    for(j=1;j<=n-1;j++)
    {
                       if(re.x!=a[j].x||re.y!=a[j].y)
                       {
                                   printf("no");
                                   
                                   return 0;
                       }
    }
    printf("%d %d",re.x,re.y);
  
    return 0;
} 