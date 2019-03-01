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
    int n,sz[400],i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&sz[i]);
    }
    printf("%d",sz[0]);
    for(i=1;i<n;i++)
    {
         int t=0;           
         for(k=0;k<i;k++)
         {
              if(sz[k]==sz[i])
              {
                   t=1;
              }
              if(t==1)
              {
                      continue;
              }
         }
         if(t==1)
         {
                 continue;
         }
         else
         {
             printf(",%d",sz[i]);
         }
    }
    return 0;
}                                             
                    
