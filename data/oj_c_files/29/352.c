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

float f(int n)
{
    float d;
    if(n==0||n==1)
    return 1;
    else
    {
        d=f(n-1)+f(n-2);
    }
    return d;
}
main()
{
      int m,a[1000],j,n,i;
      float c;
      scanf("%d",&m);
      for(i=0;i<m;i++)
      {
            c=0;
            scanf("%d",&n);
            for(j=1;j<=n;j++)
            {
                     c=c+f(j+1)/f(j);       
            }
            printf("%.3f\n",c);
      }
      getchar();
      getchar();
}
