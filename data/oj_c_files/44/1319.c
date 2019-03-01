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

 int f(int a)
{
      int n[32],i,p=10,q,b=0;
      for(i=0; ;i++)
      {
              n[i]=a%10;
              a=a/p;
              if(a==0)
              break;
      }
      for(int j=i;j>=0;j--)
      {
               q=1;
              for(int s=0;s<j;s++)
              {
                  q=q*10;
              }
              a=a+n[b]*q;
              b++;
      }
      printf("%d\n",a);
}
main()
 {
      int a;
      int f(int );
      for(int c=0;c<6;c++)
      {
         scanf("%d",&a);
         f(a);
      }
      getchar();
       getchar();
        getchar();
        getchar();
}
