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

 void main()
{
 int a[9][9],i,j,x,y,t,k=0;
 scanf("%d,%d",&x,&y);
 for(i=0;i<x;i++)
   for(j=0;j<y;j++)
    scanf("%d",&a[i][j]);
 for(i=0;i<x;i++)
  {
    for(j=0;j<y;j++)
      {
       for(k=0;k<y;k++)
       if(a[i][k]>a[i][j])
            break;
       if(k==y)
        {
          for(k=0;k<x;k++)
           if(a[k][j]<a[i][j])
             break;
          if(k==x)
           {
             printf("%d+%d",i,j);
             t++;
           }
        }
       }
   }
 if(t==0)
  printf("No");
}