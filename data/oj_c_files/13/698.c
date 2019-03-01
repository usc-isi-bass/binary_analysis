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

main()
{
      int m,n,i,j;
      int a[20000];
      int count=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("%d",a[0]);
      for(i=1;i<n;i++)
      {
                      int count=0;
                      for(j=0;j<i;j++)
                      {
                      if(a[i]==a[j])
                      count++;
                      }
                      if(count==0)
                      printf(" %d",a[i]);
      }
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
}
