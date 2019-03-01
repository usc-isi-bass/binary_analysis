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
      int n;
      scanf("%d",&n);
      int a,c=0;
      for(a=3;a+2<=n;a++)
      {
      int b,i=0;
      for(b=2;b<a;b++)
      {
                         if(a%b==0)
                         i++;
                         if((a+2)%b==0)
                         i++;
                         else;
                         }
                         if(i==0)
                         {
                         printf("%d %d\n",a,a+2);
                         c++;
                         }
                         else;
      }
                         if(c==0)
                         printf("empty\n");
}