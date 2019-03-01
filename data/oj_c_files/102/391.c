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
   int n,i,j=0,y=0,t;
   double s;
   scanf("%d",&n);
   char c[n];
   double a[n],b[n];
   for(i=0;i<n;i++)
   {
     scanf("%s %lf",&c,&s);
     t=strlen(c);
     if(t==4)
     {a[j]=s;
     j++;} 
     else
     {b[y]=s;
     y++;}                 
   }
   
   for(i=0;i<j;i++)
   {
    for(t=0;t<j-1-i;t++)
    {
    if(a[t]>a[t+1])
       {double e=a[t];
       a[t]=a[t+1];
       a[t+1]=e; }                
    }                
   }
   for(i=0;i<y;i++)
   {
    for(t=0;t<y-1-i;t++)
    {
       if(b[t]<b[t+1])                 
      { double  e=b[t];
       b[t]=b[t+1];
       b[t+1]=e; }                
    }                
   }
   for(i=0;i<j;i++)
   {printf("%.2lf ",a[i]);}
    for(i=0;i<y;i++)
   {
    if(i==y-1)
   {printf("%.2lf",b[i]);}
   else
   {printf("%.2lf ",b[i]);}
   } 
        
getchar();
getchar();
getchar();
}
