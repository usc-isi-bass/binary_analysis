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
      int n=0;
      scanf("%d",&n);
      if(n<5)
        printf("empty");
      else
      {
      for(int i=3;i<=n-2;i++)
      {
           int j;
           for(j=3;j<i;j++)   
           {
               if(i%j==0)
               break;    
           }
           if(j==i)
           {
              int q;
              for(q=3;q<i+2;q++)   
              {
                 if((i+2)%q==0)
                 break;    
              }    
              if(q==(i+2))
                printf("%d %d\n",q-2,q);
           }
      }
      }
      getchar();
      getchar();
      
}
