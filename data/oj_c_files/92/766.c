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

int compare(const void *x,const void *y)
{
    int *p1,*p2;
    p1=(int *)x;
    p2=(int *)y;
    return (*p2)-(*p1);
}
main()
{
   while(1)
   {
   int x=0,i,j,k,n,a[1000],b[1000];
   scanf("%d",&n);
   if(n==0)
     break;
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n;i++)
      scanf("%d",&b[i]);
   qsort(a,n,sizeof(int),compare);
   qsort(b,n,sizeof(int),compare);
   for(i=0;i<n;i++)
   {
      if(a[i]>b[i])
         x++;    
      if(a[i]<b[i] || a[i]==b[i])
      {
         for(j=(n-1);j>=0;j--)
         {
              if(a[j]>b[j])
                 x++;
              if(a[j]<b[j] || a[j]==b[j])
              {
                 n=j;
                 if(i==j && a[i]==b[i])
                    break;
                 for(k=i;k<n;k++)
                    b[k]=b[k+1];
                 if(a[j]<b[i]) x--;
                 break;              
              }                   
         }   
         i--;      
      }                 
   }    
   printf("%d\n",x*200);
}
}

