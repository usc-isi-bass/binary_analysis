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
      int n,a;
      scanf("%d",&n);
       while (n-1>0)
      {  if (n%2==0)
      { n=n/2;
          a=2*n;
          printf("%d/2=%d\n",a,n); 
      }   
      else
      {  n=3*n+1;
         a=(n-1)/3;
         printf("%d*3+1=%d\n",a,n); 
      }   
      
      }   printf("End");  
      
}
