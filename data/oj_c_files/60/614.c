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
      int n,i,j,a,b;
      a=1;
      scanf("%d",&n);
      for(i=2;i<=n;i++)
      {
                       
                       int m=(int)sqrt(i);
                       for(j=2;j<=m;j++)
                       {
                                          if(i%j==0) break;
                       }
                       if(j==m+1)
                       {
                                 if(i==a+2)
                                 {
                                           printf("%d %d\n",a,i);
                                 }
                                 a=i;
                       }
      }
      if(a<5) 
      {
              printf("empty");
      }
      getchar();
      getchar();
      getchar();
      getchar();
      
      
} 