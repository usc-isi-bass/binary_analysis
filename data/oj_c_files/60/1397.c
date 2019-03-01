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

 int main()
 {
     int n,i;
     scanf("%d",&n);
     if(n>=5) 
     {
              for(i=5;i<=n;i++)
        {
         int a,b=0,c;
         for(a=2;a<i;a++)
           { 
            if(i%a==0)
            b=b+1;
            } 
          if(b==0)
          {

           for(c=2;c<i-2;c++)
           { 
            if((i-2)%c==0)
            b=b+1;
            } 
          
            if(b==0)
            printf("%d %d\n",i-2,i);
            }
            b=0;
        }
     }
    
          else printf("empty");
     
     return 0;
     }