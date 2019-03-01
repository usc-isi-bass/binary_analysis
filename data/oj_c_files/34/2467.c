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
      int n,a=3,b=1,c=2,s;
      scanf("%d",&n);
      while(n!=1)
      {
                 if(n%2==1)
                 {
                           s=n*a+b;
                 printf("%d*%d+%d=%d\n",n,a,b,s);
                 }
                 else
                 {
                     s=n/c;
                 printf("%d/%d=%d\n",n,c,s);
                 }
                 n=s;
      }
      printf("End");
      getchar();
      getchar();
}