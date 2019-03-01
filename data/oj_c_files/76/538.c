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
   int i,j,n;
   struct piece {int a,b;} max,require,s[500],ex;
   scanf ("%d",&n);
    for (i=0;i<n;i++)
   {  scanf("%d %d\n",&(s[i].a),&(s[i].b)); }
    require=s[0];
   for(i=0;i<n;i++)
  {
      if (s[i].a<require.a)
       {require.a=s[i].a;}
      if (s[i].b>require.b)
       {require.b=s[i].b;}
   }
         for (i=0;i<=n-2;i++)
   {
     for(j=0;j<=n-i-2;j++)
     {
          if ((s[j].a)>(s[j+1].a))
         {
            ex=s[j+1];
            s[j+1]=s[j];
            s[j]=ex;
         } 
      }
   } 
   max=s[0];
         for (i=0;i<n;i++)
 {
     if((s[i].b>max.b)&&(s[i].a<=max.b))
     {
        max.b=s[i].b;
     } 
 }
    if ((max.a==require.a)&&(max.b==require.b))
   { 
          printf("%d %d",max.a,max.b);
   }
   else
  {
     printf("no");
  }
     return 0;
}