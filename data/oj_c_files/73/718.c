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
      int i,j,k,max,maxj,f;
      int a[5][5];
      for(i=0;i<5;i++)
       for(j=0;j<5;j++)
        scanf("%d",&a[i][j]);
      for(i=0;i<5;i++)
      {
         max=a[i][0];
         k=0;
         maxj=1;
         for(j=0;j<5;j++)
         {
           if(a[i][j]>max)
           {
              max=a[i][j];
              k=j;
           }
         }
         for(f=0;f<5;f++)
         {
           if(max>a[f][k])
           {
             maxj=0;
             break;
           }
         }
         if(maxj==1)
         {
                    printf("%d %d %d\n",i+1,k+1,max); 
                    break;
         }
      }
      if(maxj==0)
        printf("not found");              
}