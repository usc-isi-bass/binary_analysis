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

int a(int n)
{
    int i=1,j=1,k,x=1;
    if(n==1||n==2)
    return(1);
    else
    {
        for(k=0;k<n-2;k++)
        {
                     x=i+j;
                     i=j;
                     j=x;     
        }
        return(x);
    }
}
main()
{
      int n,i,j;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%d",&j);
                      printf("%d\n",a(j));
      }
      getchar();
      getchar();
}
