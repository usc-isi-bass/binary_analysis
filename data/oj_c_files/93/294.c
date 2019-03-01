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

int main(){
    int a,b,c,d;
    scanf("%d",&a);
    b=a/3;
    c=a/5;
    d=a/7;
    if((a==3*b)&(a==5*c)&(a==7*d)) printf("3 5 7");
    else
    {if((a==3*b)&(a==5*c)) printf("3 5");
     else
     {if((a==3*b)&(a==7*d)) printf("3 7");
      else
      {if((a==5*c)&(a==7*d)) printf("5 7");
       else
       {if((a==3*b)) printf("3");
        else
        {if((a==5*c)) printf("5");
         else
         {if((a==7*d)) printf("7");
          else printf("n");
         }
        }
       }
      }
     }
    }
return 0;
}   