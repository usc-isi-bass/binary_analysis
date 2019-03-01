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
      int i,j,k,n;
      scanf("%d",&n);
      int **pp;
      pp=(int **)malloc(n*sizeof(int *));
      for(i=0;i<n;i++)
      pp[i]=(int *)malloc(20*sizeof(int));
      for(i=0;i<n;i++)
      {
          scanf("%d",&pp[i][0]);
          if(pp[i][0]!=0)
          for(j=1;j<=pp[i][0];j++)
              scanf("%d",&pp[i][j]);
      }
      for(i=0;i<n;i++)
      {
        if(pp[i][0]!=0)
         for(j=pp[i][0];;)
         {if(pp[i][j]+3*j<=60)
          {
               printf("%d\n",60-j*3);
               break;
          }
          else if(pp[i][j]+3*j-3<60)
          {
               printf("%d\n",pp[i][j]);
               break;
          }
          else j--;
         }
        else printf("60\n");
          
      }
}
