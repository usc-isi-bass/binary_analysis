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


int main(){
   int n,i,sz[1000],j,k;
   int sum=0;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
                  scanf("%d",&sz[i]);
                  }
         for(i=0;i<n/2+1;i++)
         {
                         for(j=i+1;j<n;j++)
                         {
                                    if(sz[i]+sz[j]==k)
                                    {
                                           sum++;
                                           break;
                                           }
                                           }
                                           }
            
              if(sum!=0)
              {
                  printf("yes");
                  }
              if(sum==0)
              {
                        printf("no");
                        }
                             
                                                             
        return 0;
}