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
      int n,n1,n2; 
      int i,j,k; 
      scanf("%d",&n); 
      if(n<5) 
      printf("empty"); 
      else
      { 
          i=3; 
          while(i<n-1)
          { 
            n1=(int)sqrt(i); 
            for(j=2;j<=n1;j++)
            { 
                  if(i%j==0) 
                       break; 
            } 
            if(j==n1+1) 
            { 
                  n2=(int)sqrt(i+2); 
                  j=2; 
                  k=i+2; 
                  for(j=2;j<=n2;j++)
                  { 
                       if(k%j==0) 
                           break; 
                  } 
                       if(j==n2+1) 
                       printf("%d %d\n",i,k); 
             } 
             i=i+2; 
            } 
       }

}