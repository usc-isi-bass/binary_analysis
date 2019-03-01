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

int ss(int x)
{   int i;
    for(i=2;i<=x;i++)
       {
           if (x%i==0)
              if(i!=x)
                return(0);

       }
       return(1);
}
int main()
{
    int a,b,n;
    scanf("%d",&n);
    if (n<5)
       {
           printf("empty");
           return 0;
       }
    for(a=2,b=0;a<=(n-2);a++)
       { if(ss(a))
           {

               b=a+2;
               if(ss(b))
                 {
                     printf("%d %d\n",a,b);
                 }

           }
       }
}

