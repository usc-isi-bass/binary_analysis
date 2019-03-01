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


int sushu(int x)
{   int m,i,e;
    m=sqrt(x);
    e=(int)(m);
    for (i=3;i<=e;i++)
    {
        if (x%i==0)
           return 0;
    }
    return 1;
}
main()
{
      int n,i,a,q,w;
      scanf("%d",&n);
      if(n<5)
      printf("empty");
      for(i=3;i<=n-2;i=i+2)
      {
                         a=i+2;
                         q=sushu(i);
                         w=sushu(a);
                         if((q!=0)&&(w!=0))
                         printf("%d %d\n",i,a);
                      
      }
      }
