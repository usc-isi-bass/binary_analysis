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

int f(int m)
{
    int d=0;
    while(m!=0)
    {
    d=d*10+m%10;
    m=m/10;
    }
    return d;
}
main()
{
      int a[7],b[7],c[7],i=1,m;
      for (;i<=6;i++)
      {
      scanf("%d",&a[i]);
      if (a[i]>=0)
      {
      m=a[i];
      c[i]=f(m);
      
      }
      else
      {
      m=-a[i];
      b[i]=f(m);
      c[i]=-b[i];
      }
      }
      for(i=1;i<=6;i++)
      printf("%d\n",c[i]);
            return 0;
      }
      
