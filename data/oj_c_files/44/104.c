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

main()
{
      int reverse(int num);
      int a[6],i;
      for(i=0;i<=5;i++)
      scanf("%d",&a[i]);
      for(i=0;i<=5;i++)
      {
                           if(i==0) 
                              printf("%d",reverse(a[i]));
                              else
                              printf("\n%d",reverse(a[i]));
                              }
      getchar();
      getchar();
}
int reverse(int num)
{
    int a=num,x,b=0;
    for(;a!=0;)
    {
           x=a%10;
           a=a/10;
           b=x+b*10;
         
     }
       return(b);
}
