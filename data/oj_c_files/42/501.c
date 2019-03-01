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
   long n,k,i,j,m=0,t;
   long a[100000];
   scanf("%ld",&n);
   for(i=0;i<n;i++)
      scanf("%ld",&a[i]);
   scanf("%ld",&k);
   for(i=0;i<n;i++)
      if(a[i]==k)
         m++;
   if(a[0]==k);
   for(i=0;i<n;i++)
   {
      if(a[i]==k)
      {
         for(j=0;j<=i;j++)
         {
            t=a[0];
            a[0]=a[j];
            a[j]=t;
         }
      }
   }
   for(i=m;i<n-1;i++)
      printf("%ld ",a[i]);
   printf("%ld",a[n-1]);
}