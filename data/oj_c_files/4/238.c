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
   int h,z,i,sz[100][100],k;
   scanf("%d %d",&h,&z);
   for(i=0;i<h;i++)
   {
       for(k=0;k<z;k++)
       {
            scanf("%d",&sz[i][k]);
       }
   }
   for(i=0;i<=h+z-2;i++)
   {
       for(k=0;k<h;k++)
       {
          if(i-k<0||i-k>=z)
          {
             continue;
          } 
          else
          {                                
              printf("%d\n",sz[k][i-k]);
          }
       }                
   }
   return 0;
}                                    
