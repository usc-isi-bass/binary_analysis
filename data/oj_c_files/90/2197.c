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

int N,n,m;
int max(int x,int y)
{
    int c;
    if(y<=0)
    {
        if(y==0)
        c=1;
        else
        c=0;
    }
    else
    {
        if(x==1)
            c=1;
        else
            c=max(x-1,y)+max(x,y-x);
    }
    return(c);
}
main()
{
      int i;
      scanf("%d",&N);
      for(i=1;i<=N;i++)
      {
          scanf("%d%d",&n,&m);
          printf("%d\n",max(m,n));
      }
     }