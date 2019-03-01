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

int main ()
{
 int a[6][6];
 int i,j;
 for(i=1;i<=5;i++)
 {   for(j=1;j<=5;j++)
      {
           scanf("%d",&a[i][j]);
       }
 }
 int l=0;
 for(i=1;i<=5;i++)
    {  
       int s=1,t,f=0;
       int m=a[i][1];
       for(j=1;j<=5;j++)
        {
          if(a[i][j]>m)  {  m=a[i][j]; s=j;  }
         }
       for(t=1;t<=5;t++)
        {     
          if(a[t][s]<m)  { f=1; break;}
        }
       if(f==1)  continue;
       printf("%d %d %d",i,s,a[i][s]);
       l=l+1;
     }
 if(l==0)  printf("not found");
  return 0;

  }