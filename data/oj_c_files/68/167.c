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
    int n;
    scanf("%d\n",&n);
    int i,j,k;
    int v,w;
    i=6;
    do
    {
      for(j=3;j<=i/2;j+=2)
      {
       if(sqrt(j)<3)
       {w=1;}
       else
       {
         for(k=3;k<=sqrt(j);k+=2)
         {
           if(j%k==0)
           {w=0;break;}
           else {w=1;}
          }
       }
       if(sqrt(i-j)<3)
       {v=1;}
       else
       {
          for(k=3;k<=sqrt(i-j);k+=2)
          {
            if((i-j)%k==0)
            {v=0;break;}
            else {v=1;}
           }
       }
       if(w==1&&v==1)
       {printf("%d=%d+%d\n",i,j,i-j);
       i=i+2;
       break;}
      }
     }while(i<=n);
return 0;
}
