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
      int n,a,b,c,d,e;
      scanf("%d",&n);
      if(n<5)
      {printf("empty");
       }
      else
      {
       for(a=5;a<=n;a+=2)
       {
          b=(int)sqrt(a);
          for(c=3;c<=b;c++)
          {
            if(a%c==0)
            {break;
            }
          }
          if(c>b)
          {
              d=(int)sqrt(a-2);  
              for(e=2;e<=d;e++)
              {
                if((a-2)%e==0)
                {break;
                }
              }
              if(e>d)
              {
                 printf("%d %d\n",a-2,a);
              }
          }
       }
      }  
      return 0;
}
