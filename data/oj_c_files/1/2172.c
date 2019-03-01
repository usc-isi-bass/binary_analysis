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

int f(int t,int k)
{
    int u=1,i;
    if(t>2)
    {
    for(i=k;i<=sqrt(t);i++)
    {
        if(t%i==0)
        {
            u += f(t/i,i);
        }
    }
    return u;
    }
    else if(t==2)
    return 1;
    else if(t==1)
    return 0;
}
main()
{
      int i,n,t;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&t);
          printf("%d\n",f(t,2));
      }
}
