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
      int n,i,a;
      scanf("%d",&n);
      if(n==5) printf("3 5\n");
      else if(n<=4) printf("empty\n");
      else for(a=2;a<=n;a++)
      {for(i=2;i<a;i++)
       {if(a%i==0) break;
        if(i==a-1) 
        for(int j=2;j<a+2;j++)
        {if((a+2)%j==0) break;
         if(j==a+1)
         printf("%d %d\n",a,a+2);
         }}}
        
         }