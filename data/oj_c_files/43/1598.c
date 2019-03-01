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

int pd(int x)
  {
    int z=0,i;
    if(x%2!=0)
       {for(i=3;i<=sqrt(x);i+=2)
           {if(x%i==0)
            break;
           }
         if(i>sqrt(x))
         z=1;}
         return z;
    }
         
int main()
{
    int n,a;
    scanf("%d",&n);
    for(a=3;a<=n/2;a+=2)
      {
        if(pd(a)==1&&pd(n-a)==1)
          printf("%d %d\n\n",a,n-a);
      }
 
     return 0;
}
