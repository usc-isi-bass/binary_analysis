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
    int n,a,b,count,i,count_max;
    scanf("%d",&n);
    count=0;
    count_max=0;
    for(i=1;i<=n;i=i+1)
    {
       scanf("%d %d",&a,&b);
       if(a>=90 && a<=140 && b>=60 && b<=90)
           count=count+1;
       else           
          {
               if(count_max<count)
                     count_max=count;
               count=0;
           }
       if(count>count_max)
           count_max=count;
     }
          printf("%d",count_max);
     return 0;
}    