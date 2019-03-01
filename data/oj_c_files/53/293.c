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
  int b[301],a[301];
  int i,n,j,k,count;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  /*for (i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }*/
  b[0]=a[0];
  for (i=1,j=1;i<n;i++)
  {
    for (k=0,count=0;k<i;k++)
       {if (a[k]!=a[i])
          count++;
       }
    if (count==i)
      {
        b[j]=a[i];
        j++;
      }
  }
   for (i=0;i<j;i++)
   {
     printf("%d",b[i]);
     if(i!=j-1)
     printf(",");
   }
   
   return 0;
   }