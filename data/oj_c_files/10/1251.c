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
      int i,j,n;
      scanf("%d",&n);
      int high[100],count[100];
      for(i=0;i<n;i++)
      {
             count[i]=0;         
             scanf("%d",&high[i]);
      }
       high[n]=0,count[n]=0;
      for(i=n-1;i>=0;i--)
      {
             int step=0;        
            for(j=i+1;j<=n;j++)
            {
                     if(count[j]>step)
                     {   if(high[j]<=high[i])
                         step=count[j];
                         }
            }
            count[i]=step+1;
            
      }
      int max=0;
      for(i=0;i<n;i++)
      if(count[i]>max)
      max=count[i];
      printf("%d",max);
      getchar();getchar();getchar(); getchar();getchar();getchar();
}                                                                                            
