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
  {int a,b,c,d;
   scanf("%d",&a);
   b=a%3;
   c=a%5;
   d=a%7;
   if (b==0)
     {printf("3");
     if (c==0)
        printf(" 5");
     if (d==0)
        printf(" 7");
      }   
   else if(c==0)
        {printf("5");
         if(d==0)
           printf(" 7");
         }
        else if(d==0)
             printf("7");
             else
             printf("n");
  return 0;
  }