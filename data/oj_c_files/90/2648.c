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

int apple(int m, int n)
{
    if(m<n&&m!=0&&n>1)
    {
           return apple(m,n-1);
    }
    else if(m>=n&&m!=0&&n>1)
    {
           return apple(m,n-1)+apple(m-n,n);
    }
    else if(m==0)
    return 1;
    else if(n==1&&m!=0)
    return 1;
}
main()
{
      int t,i,m,n;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
                      scanf("%d %d",&m,&n);
                      printf("%d\n",apple(m,n));
      }
}
