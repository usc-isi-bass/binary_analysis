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
      int a,b,c[100000],d,e;
      e=0; 
      scanf("%d",&a);
     for(b=1;b<=a;b++)
     scanf("%d",&c[b]);
     printf("%d",c[1]);
     b=2;
     while(b<=a)
     {
                e=0;
      for(d=1;d<b;d++)
      {
        if(c[b]==c[d])
        e=1;
        else 
        e=e;
        }
          if(e==0)
          printf(" %d",c[b]);
          b=b+1;
          }
          getchar();
          getchar();
          }