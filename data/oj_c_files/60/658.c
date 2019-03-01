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
      int m,k,i,n=0,h;
      scanf("%d",&h);
      if(h<5) printf("empty");
      else
         {
              for(m=3;m<=h;m=m+2)
              {
                  k=sqrt(m);
                for(i=2;i<=k;i++)
                       if(m%i==0)  break;
                if(i>=k+1)
                   {k=sqrt(m+2);
                     for(i=2;i<=k;i++)
                        if((m+2)%i==0)  break;
                        if(i>=k+1) 
                           if((m+2)<=h)
                            printf("%d %d\n",m,m+2);
                        }
                        }   
         }
        getchar();
         getchar();
         getchar();
} 