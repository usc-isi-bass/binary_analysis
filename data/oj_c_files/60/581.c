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

int ss(int x)
{
    int i,a;
    i=2;
    a=1;
    while(i<x&&a!=0)
    {
                    a=x%i;
                    i++;
    }
    return(a);
}
main()
{
      int n,m;
      scanf("%d",&n);
      m=3;
      if (n<=4)
      printf("empty");
      while(m<=n-2)
      {
                   if(ss(m)!=0&&ss(m+2)!=0)
                   printf("%d %d\n",m,m+2);
                   m++;
                   }                   
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
