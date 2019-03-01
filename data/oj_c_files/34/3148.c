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
      int a,b;
      scanf("%d",&a);
      while (a!=1)
      {
            if (a%2==1)
               {
                       b = a;
                       a=a*3+1;
                       printf("%d*3+1=%d\n",b,a);
                       }
            else
               {
                b= a;
                a=a/2;
                printf("%d/2=%d\n",b,a); 
               }
      }
      printf("End");
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
}
                
                          