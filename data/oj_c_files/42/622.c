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
   long a[100000],*p,*q;
   scanf("%ld",&n);
   for(i=0;i<n;i++)
      scanf("%ld",&a[i]);
   scanf("%ld",&k);
   p=a;q=a;
   for(p=a;p<a+n;p++)
   {
      if(*p==k)
      {
		 m++;
         for(q=a;q<=p;q++)
         {
            t=a[0];
            a[0]=*q;
            *q=t;
         }
      }
   }
   for(p=a+m;p<a+n-1;p++)
      printf("%ld ",*p);
   printf("%ld",*(a+n-1));
}
