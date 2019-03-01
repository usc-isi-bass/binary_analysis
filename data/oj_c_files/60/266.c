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
      int n,m,i,j,k=0;
      scanf("%d",&n);
      for(i=3;i<=n-2;i++)
      {
                      m=sqrt(i+2); 
                      for(j=2;j<=m;j++)
                      {
                                       if(i%j==0||(i+2)%j==0)
                                       break;
                      }
                      if(j>m)
                      {
                             printf("%d %d\n",i,i+2);
                             k++;
                      }
      }
      if(k==0)
      printf("empty");
      getchar();
      getchar();
}