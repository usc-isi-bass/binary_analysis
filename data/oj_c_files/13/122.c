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
    int n,a[20000];
    int count1,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
                    count1=0;
            for(k=0;k<j;k++)
            {
               if(a[j]==a[k])
               {
               count1=1;
               break;
               }
            }
            if(count1==0)
            {
                       if(j==0)
                       printf("%d",a[0]);
                       else
                       printf(" %d",a[j]);
            }
            
    }
    getchar();
     getchar();
      getchar();
       getchar();
        getchar();
         getchar();
          getchar();
    return 0;
}

