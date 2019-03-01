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
      int a,b,c;
      scanf("%d",&a);
      while(a>=2)
      {
                     if(a%2==1)
                     {b=3*a+1;
                     printf("%d*3+1=%d\n",a,b);
                     c=b;a=c;a=b;
                     continue;
                     }
                     else 
                     {b=a/2;
                     printf("%d/2=%d\n",a,b);
                     c=b;a=c;a=b;
                     continue;}
                     }
                     
                     printf("End\n");
      
      }
