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
      int w;
      scanf("%d",&w);
      
      int day[13];
      
      day[1]=31;
       day[2]=28;
        day[3]=31;
         day[4]=30;
          day[5]=31;
           day[6]=30;
            day[7]=31;
             day[8]=31;
              day[9]=30;
               day[10]=31;
                day[11]=30;
                 day[12]=31; 
      
for (int i=1;i<=12;i++)
     {  
         
         if ((13+w-1)%7==5)printf("%d\n",i);
         w=(w+day[i])%7;
     }
      
 }
