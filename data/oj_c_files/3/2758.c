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
    int n,i,k,num;
    int a[N],b[N];
    scanf("%d%d",&n,&num);
    
    for(i=0;i<n;i++)
   {
       scanf("%d",&(a[i]));
   }
   for(k=0;k<n-1;k++)
   {
       for(i=1;i<n-k;i++)
       {
           if(a[k]+a[k+i]==num)
           {
              goto done;
           }
       }
     
   }
   
   
   done:if(k>=n-1)
        {
            printf("no");
        }
        else
        {
             printf("yes");
        }
    return 0;
}






