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
 int a=1,b=0;
 int n ,i;
 int x ,q;

 scanf("%d",&n);
 for(i=0;i<n;i++)
    {
       scanf("%d",&x);

       q=(x>a)+(x>b)  ;

       switch(q)
       {
       case 2:

          b=a,a=x;
          break;
       case 1:
          b=x;
          break;
       case 0:
          break;

       }
    }
  printf("%d\n%d",a,b);

  
  return 0;

  }