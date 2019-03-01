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
      int n,a[20000],b[20000],i,j;
      scanf("%d",&n);
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);
      for(i=0;i<n;i++)
        b[i]=0;
      printf("%d",a[0]);
      for(i=1;i<n;i++)
        for(j=0;j<i;j++)
          if(a[i]==a[j])
          {
             b[i]++;
             break;
          }   
      for(i=1;i<n;i++)
        if(b[i]==0)
          printf(" %d",a[i]);
      getchar();
      getchar();
      getchar();
      getchar();
}
