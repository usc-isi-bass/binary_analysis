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

int f(int x)
{
    int n;
    if(x==1||x==2)
       n=1;
    else
       n=f(x-1)+f(x-2);
    return n;
}
main()
{
      int n,x;
      scanf("%d",&n);
      int i,j;
      for(i=0;i<n;i++)
      {
                      scanf("%d",&x);
                      printf("%d\n",f(x));
      }
}
                      
