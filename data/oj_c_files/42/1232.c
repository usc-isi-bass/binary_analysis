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
      int n,i,j=0;
      scanf("%d",&n);
      long a[n],k;
      int mark[n];
      for(i=0;i<n;i++)
         scanf("%ld",&a[i]);
      scanf("%ld",&k);
      for(i=0;i<n;i++)
      {
                      if(k!=a[i])
                      {
                              mark[j]=a[i];
                              j++;  
                      }
      }
      for(i=0;i<j-1;i++)
         printf("%ld ",mark[i]);
      printf("%ld",mark[j-1]);
}