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

int Max(int n,int a[])
{
   int x=0;
   for(int i=0;i<n;i++)
   {
       if(x<a[i])
       x=a[i];
   }
   return x;
}
main()
{
   int x,n,i,j,b=1;
   int *p;
   int *q;
   scanf("%d",&n);
   p=(int *)malloc(n*sizeof(int));
   q=(int *)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
       scanf("%d",p+i);
   for(i=n-1;i>=0;i--)
   {
      
      {   x=0;
          for(j=i+1;j<n;j++)
          {
             if((p[i]>=p[j])&&(x<q[j]))
                 x=q[j];
          }
          q[i]=x+1;      
      }
   }
   printf("%d",Max(n,q));       
}
