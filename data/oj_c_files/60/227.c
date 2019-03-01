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
      int n,n1,n2,i,a,j;
      scanf("%d",&n);
      a=0;
      for(i=2;i<=n-2;i++)
      {
           for(j=2;j<i;j++)
           {
                 if(i%j==0)
                 {n1=0;
                 break;}
                 else
                 n1=1;
           }
           for(j=2;j<i+2;j++)
           {
                 if((i+2)%j==0)
                 {n2=0;
                 break;}
                 else
                 n2=1;
           }
          if(n1*n2==1)
          {
              a++;
              if(a==1)
              printf("%d %d",i,i+2);
              else
              printf("\n%d %d",i,i+2);
          }
      }
      if(a==0)
      printf("empty"); 
      getchar();
      getchar();
}
