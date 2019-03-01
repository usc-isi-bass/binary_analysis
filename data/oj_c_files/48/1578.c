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
      int p[9][9];
      int q[9][9];
      int m,n,i,j,k;
      scanf("%d %d",&m,&n);
      for(i=0;i<9;i++)
         for(j=0;j<9;j++)
         {
            p[i][j]=0;
            q[i][j]=0;
         }
      p[4][4]=m;
      for(k=0;k<n;k++)
      {
      for(i=0;i<9;i++)
         for(j=0;j<9;j++)
         {
            if(p[i][j]!=0)
            {
               q[i][j]+=2*p[i][j];
               q[i-1][j-1]+=p[i][j];
               q[i-1][j]+=p[i][j];
               q[i-1][j+1]+=p[i][j];
               q[i][j-1]+=p[i][j];
               q[i][j+1]+=p[i][j];
               q[i+1][j-1]+=p[i][j];
               q[i+1][j]+=p[i][j];
               q[i+1][j+1]+=p[i][j];
            }
         }
      for(i=0;i<9;i++)
         for(j=0;j<9;j++)
         {
            p[i][j]=q[i][j];
            q[i][j]=0;
         }
      }
      for(i=0;i<9;i++)
         for(j=0;j<9;j++)
         {
            if((j+1)%9!=0)printf("%d ",p[i][j]);
            else printf("%d\n",p[i][j]);
         }

}