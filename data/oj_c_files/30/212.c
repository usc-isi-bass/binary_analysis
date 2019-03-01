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
      int n,i=1,b,c,s=0;
      scanf("%d",&n);
      
      while (i<=n)
      {
            c=i-i/10*10;
            b=i/10; 
          
            if(i%7==0)
            {i++;
            continue;}
            if (b==7||c==7)
           { i++;
            continue;}
                             s=s+i*i;
                 i++;
        }    
            printf("%d",s);
      
return 0;
}
