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
      int i,j,n,k,l,sum,c,d;
      scanf("%d",&n);
      int*a=(int*)malloc(n*sizeof(int));
      int*b=(int*)malloc(n*sizeof(int));
      for(k=0;k<n;k++)
      {
          a[k]=0;b[k]=0;
      }
      for(i=0;;i++)
      {
                   scanf("%d %d",&c,&d);
                   a[c]++;
                   b[d]++;                   
                   if(c==0&&d==0)
                   break;
      }
      sum=0;
      for(j=0;j<=n-1;j++)
      {
                        if(a[j]==0&&b[j]==n-1)
                        {
                             printf("%d",j);
                             sum++;
                        }
      }
      if(sum==0)
      printf("NOT FOUND");
}

