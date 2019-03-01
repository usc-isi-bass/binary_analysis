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
      int n,a,i,k;
      
      scanf("%d",&n);
      if(n<=4)
      printf("empty");
      else
      {
          n=n-2;
      for(a=3;a<=n;a=a+2)
          {
          
          for(k=2;k<=a;k=k+1)
          if(a%k==0)break;
          if(k==a)
          {
          
          for(k=2;k<=(a+2);k=k+1)
          if((a+2)%k==0)break;
          if(k==(a+2))
          printf("%d %d\n",a,(a+2));
          }
          
          }
          }
      
      
      }
