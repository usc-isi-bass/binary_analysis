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

int maxii(int n,int *a)
{
    int k,i,s;
    k=1;
    for(i=1;i<n;i++)
    {
        if ((a[i]<=a[0])&&(maxii(n-i,a+i)>(k-1)))
        k=maxii(n-i,a+i)+1;
    }
    return k;
}
          
main()
{
      int n,*k,i,j,c;
      int a[25];
      scanf("%d",&n);
      for (i=0;i<n;i++)
      scanf("%d",&a[i]);
      k=(int*)malloc(n*sizeof(int));
      c=1;
      for(j=0;j<n;j++)
      {
          if (c<maxii(n-j,a+j))
          c=maxii(n-j,a+j);
      }
      printf("%d",c);
}