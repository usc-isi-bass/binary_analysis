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

int f(int x,int y)
{
    int k;
    if(x!=0&&y!=1)
    {
                  if(x>=y)
                  k=f(x,y-1)+f(x-y,y);
                  else
                  k=f(x,y-1);
    }
    else
    {
        if(x==0)
        k=1;
        if(y==1)
        k=1;
    }
    return k;
}
main()
{
      int n;
      scanf("%d",&n);
      for(int i=1;i<=n;i++)
      {
              int x,y;
              scanf("%d %d",&x,&y);
              printf("%d\n",f(x,y));
      }
}
