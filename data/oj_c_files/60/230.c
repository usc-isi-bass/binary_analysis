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
      int n,now,i,j,ok,ok2;
      
      scanf("%d",&n);
      now=2; ok2=0;
      if (n>2)
      {      
              for (i=3;i<=n;i++)
              {
                     ok=1;
                     for (j=2;j<=(int)(sqrt(i));j++)
                         if (i%j==0)
                         {
                             ok=0;
                             break;
                         }
                     if (1==ok)
                     {
                         if (2==i-now)
                         {
                             printf("%d %d\n",now,i);
                             if (0==ok2)
                                 ok2=1;
                         }
                         now=i;                             
                     }
              }
              if (0==ok2)
                  printf("empty\n");      
      }
      else 
          printf("empty\n");
      return 0;
}
