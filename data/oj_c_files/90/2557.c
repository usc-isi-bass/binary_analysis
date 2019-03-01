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

int fang(int a,int b)
{
    int m; 
    if(b==1||a==0) m=1;
    else
    {
        if(a>=b) m=fang(a-b,b)+fang(a,b-1);
        if(a<b)  m=fang(a,b-1);
    }
    return m;
}
main()
{
      int i,p,q,a,n;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          scanf("%d %d",&p,&q);
          a=fang(p,q);
          printf("%d\n",a);
      }
}