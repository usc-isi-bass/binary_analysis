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

int f(int i)
{
    int t;
    if (i==1||i==2)
    {
           t=1;
    }
    if(i>2)
    {
           t=f(i-2)+f(i-1);
    }
    return t;
}
main()
{
      int a[1000];
      int n;
      int i;
      int b;
      scanf("%d",&n);
      for (i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      for (i=0;i<n;i++)
      {
          printf("%d\n",f(a[i]));
      }
      getchar();getchar();getchar();getchar();
}
          
          
