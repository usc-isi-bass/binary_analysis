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
   int a[5][5],i,j,k,s,h;
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           for(k=0;k<5;k++)
           {
               if(a[i][j]<a[i][k])
               break;
           }
           if(k==5)
           {
               for(s=0;s<5;s++)
               {
                   if(a[i][j]>a[s][j])
                   break;
               }
               if(s==5)
               {printf("%d %d %d",i+1,j+1,a[i][j]);h=1;}
           }
       }
   }
   if(h!=1)
   printf("not found");
   getchar();
   getchar();
    return 0;
}
