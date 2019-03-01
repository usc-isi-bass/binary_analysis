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

int reverse(int num)
{
    int c=0,a;
    if(num>=0)
    {
              for(;num!=0;)
              {
                    a=num%10;
                    c=c*10+a;
                    num=num/10; 
              }
              return c;
    }
    else
    {
        num=0-num;
        for(;num!=0;)
              {
                    a=num%10;
                    c=c*10+a;
                    num=num/10; 
              }
        c=0-c;
        return c;
    }
}
main()
{
      int n;
      for(int i=1;i<=6;i++)
      {
                       scanf("%d",&n);
                       n=reverse(n);
                       printf("%d\n",n);
      }

}
