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
   char a[1000],b[1000];
   int i,j,m,n,k,q,p,t;
   scanf("%s%s",a,b);
   m=strlen(a);
   n=strlen(b);
   if(m!=n) printf("NO\n");
   else 
   {
      for(i=0;i<m;i++)
      {
        for(j=0,p=0;j<m;j++)
        if(a[i]==a[j]) p++;
        for(k=0,q=0;k<n;k++)
        if(a[i]==b[k]) q++;
        if(q!=p) 
        {
          printf("NO\n");
          break;
        }
        else t++;
      }
      if(t==n) printf("YES\n");
   }
}