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

int sushu(int a)
{
    int x=(int) sqrt(a);
    int i;
    int k=1;
    for (i=2;i<=x;i++)
    {
        if (a%i!=0) k=1;
        else
        {
            k=0;
            break;
        }
    }
    return k;
}
main()
{
      int n;
      scanf ("%d",&n);
      int i,j,k;
      for (i=6;i<=n;i=i+2)
      {
          for (j=3;j<=i-j;j=j+2)
          {
              if (sushu(j)==1&&sushu(i-j)==1)
              { printf ("%d=%d+%d\n",i,j,i-j); break; }
          }
      }
}
