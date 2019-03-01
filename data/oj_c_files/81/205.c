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

 int hh(int a, int b )
{    
       if(a<5&&b<5)
       { 
          return 1;
        } 
        else { 
	        return 0;
	     }
}
 int main()
{
     int i,j,m,n,a,b,s;
     int x[5][5],y[5];   
     for(i=0;i<5;i++)
     {
        for(j=0;j<5;j++)
         {
            scanf("%d",&x[i][j]);
          }
      } 
      scanf("%d %d",&m,&n);
      if(hh(m,n)==0)
       printf("error");
      else{
            for(i=0;i<5;i++)
            {
              y[i]=x[n][i];
              x[n][i]=x[m][i];
              x[m][i]=y[i];
             }
            
         for(i=0;i<5;i++)
           for(j=0;j<5;j++)
           {
               if(j==4)
                 printf("%d\n",x[i][4]);
             else
                 printf("%d ",x[i][j]);
            }
           }
         return 0;
}



