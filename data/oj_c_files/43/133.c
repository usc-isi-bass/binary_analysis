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

int prime(int n)
{
    int i,z=1;
    for(i=3;i<=n/2;i++)
    {
         if(n%i==0)
         {z=0;break;}
    }
    return z;
}
main()
{
      int n,i;
      scanf("%d",&n);
      for(i=3;i<=n/2;i=i+2)
      {
           if(prime(i)==1&&prime(n-i)==1)
           printf("%d %d\n",i,n-i);
      }
      getchar();
      getchar();
      return 0;
}
