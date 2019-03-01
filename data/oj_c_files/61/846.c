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
      int n,i;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
                       int m,j;
                       scanf("%d",&m);
          int a[1000];
          a[1]=1;
          a[2]=1;
          for(j=3;j<=m;j++)
           a[j]=a[j-1]+a[j-2];
          if(m==1||m==2)
          printf("%d",1);
          else
          printf("%d",a[m]);
          if(i<n)
          printf("\n");


          }
      
      getchar();
      
}