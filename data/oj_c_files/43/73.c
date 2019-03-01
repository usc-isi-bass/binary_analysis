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

int shusu(int n)
{  int k;
   k=(int)sqrt(n);
   int i,t;
   if(n==3)
   return 0;
   else
  { for(i=3,t=0;i<=k;i=i+2)
   if(n%i==0)
   t=t+1;
   return t; 
}
}
main()
{     int n;
      scanf("%d",&n);
      int i;
      for(i=3;i<=n/2;i=i+2)
     {if(shusu(i)==0&&shusu(n-i)==0)
      printf("%d %d\n",i,n-i);                 
                       }
      
}
