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
   int n,temp,x1,x2,y1,y2;
   static int a[1002][1002];
   int i,j;
   
   
 //  for (i=1;i<=100;i++) 
  //     for (j=1;j<=100;j++) printf("%d ",a[i][j]);   
   
   
   
   scanf("%d",&n);
   for (i=1;i<=n;i++)
       for (j=1;j<=n;j++) 
           {
            scanf("%d",&temp);
            a[i][j]=(temp==0)? 1:0;               
           }
   for  (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
            if (a[i][j]==1)
               {
                    if ((a[i][j+1]==1)&&(a[i+1][j]==1)) {x1=i;y1=j;}            
                    if ((a[i][j-1]==1)&&(a[i-1][j]==1)) {x2=i;y2=j;}      
               }
    printf("%d\n",(x2-x1-1)*(y2-y1-1));
  //  scanf("%d",&n);
    return 0;
   
}  
