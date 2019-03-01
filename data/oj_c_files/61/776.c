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

int f(int n)
{
    int c;
    if(n==1||n==2)
    c=1;
    else
    c=f(n-1)+f(n-2);
    return(c);
}
main()
{
      int n,i,m;
      int f(int n);
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
             scanf("%d",&m);
             printf("%d\n",f(m));
      }
      getchar();
      getchar();
}