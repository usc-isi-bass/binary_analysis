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
   int m,n,a[300],i,j,k;
   for(;;)
   {
    scanf("%d %d",&n,&m);
    if(n==0&&m==0) break;
    else
     {for(i=1;i<=n;i++)
        a[i]=i;
       for(i=1,j=1,k=0;i<n;)
      {
       if(a[j]!=0)  k++;
       if(k==m) {a[j]=0;k=0;i++;}
       if(j==n) j=1;
          else j++;
       }  
      for(i=1;i<=n;i++)
        if(a[i]!=0) printf("%d\n",a[i]);
      }
   }
}