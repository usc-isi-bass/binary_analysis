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
    int i,n,j,p,q,count=0;
    scanf("%d",&n);
    for(i=3;i<=n-2;i=i+2)
    {
          for(p=0,j=2;j<i;j++)
          {
          if(i%j==0)
          break;
                          }
          if(j==i)
          p=1;
          for(q=0,j=2;j<i+2;j++)
          {
             if((i+2)%j==0)
             break;
                            }
             if(j==i+2)
             q=1;
             if(p==1&&q==1){
             printf("%d %d\n",i,i+2);
             count++;}
                       }
                       if(count==0)
                       printf("empty");
                      

                       return 0;
                       }
