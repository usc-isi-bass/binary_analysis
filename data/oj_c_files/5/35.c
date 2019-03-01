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
   char a[501],b[501];
   double c,d;
   int j=0,n,i,e=0,m;
   scanf("%lf%s%s",&c,a,b);
   n=strlen(a);
   m=strlen(b);
   if(n!=m)
     {
        e=1;
      }
   else{
   for(i=0;i<n;i++)
      {
         if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')) 
           {
             e=1;
            }
       }}
   if(e==1)
     {
       printf("error");
      }
   while(e==0)
   {
    for(i=0;i<n;i++)
      {
         if(a[i]==b[i])
           {
              j++;
           }
       }
   d=1.0*j/n;
   if(d>=c)
     {
       printf("yes");
     }
   else
     {
       printf("no");
      }
    e=1;
   }
   return 0;
}