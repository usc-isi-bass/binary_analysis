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
      int n, total[100] = {0}, broke, time, i, j, broke_time[61] = {0}, timer;
      
      scanf("%d", &n);
      for(i = 0; i <= n - 1; i++)
      {
            scanf("%d", &broke);
            
            for(j = 1;j <= broke;j ++)
            {
                  scanf("%d", &timer);
                  broke_time[timer] = 1;
            }
            
            for(time = 1;time <= 60; time ++)
            {
                     total[i] ++;
                     if(broke_time[total[i]] == 1)
                     {
                                         //printf("(%d)", time);
                                         time += 3;
                                         
                                         //printf("|%d|[%d]\n", total[i], time);
                     }
                     if (time > 60) break;
                     
            }


            for(j = 0;j <=60;j++)
            {
                  broke_time[j] = 0;
                  }

            
      }
      
      for(i = 0;i <= n-1; i ++)
      {
            printf("%d\n", total[i]);
            }
}
                  
