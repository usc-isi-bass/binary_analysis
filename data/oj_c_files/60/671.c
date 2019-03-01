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
      int n,a,b,i,k,c,d;
      d=0;
      scanf("%d",&n);
      if (n>4)
      {
              d=d+1;
              printf("3 5\n");
      }
      
      for (a=2;a<=n-2;a++)
      {
          b=a/2;
          i=2;
          c=0;
          while(i<=b)
          {
               k=a%i;
               if (k==0)
               {
                        c++;
               }
               i++;
          }
          if (c==0)
          {
                   a=a+2; 
                   b=a/2;
                   i=2;
                   c=0;
                   while(i<=b)
                     {
                        k=a%i;
                      if (k==0)
                        {
                        c++;
                        }
                      i++;
                     }
                     if (c==0)
                     {
                              d=d+1;
                              printf("%d %d\n",a-2,a);
                     }
                 
          }
      }
      if (d==0)
      {
               printf("empty");
      }
     getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
     }
      
          
      
