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
    int n,i,j,a;
    scanf("%d",&n);
    if(n<5)
    printf("empty\n");
    else
    {
      for(i=3;i<n-1;i++)
      {
         a=(int)sqrt(i);
         for(j=2;j<=a;j++)
         {
            if(i%j==0)
            {break;}
         }
         if(j==a+1)
           {
                  a=(int)sqrt(i+2);
                   for(j=2;j<=a;j++)
                    {
                      if((i+2)%j==0)
                      {break;}
                     }
                    if(j==a+1)
                    {printf("%d %d\n",i,i+2);}
           
           }
          
       }
    }
     // getchar();
     // getchar();
      return 0;
}
