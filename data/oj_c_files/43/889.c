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
   int n, i, j, a[10000], flag=0;
   scanf("%d",&n);
   for (i=3;i<=n;i++)
   {
   for(j=2;j<i;j++)
   {if(i%j==0)
   break;
   }
   if(j==i)
   {flag+=1;
   a[flag]=i;
   }  
   }
     for(i=1;i<=flag;i++)
     {
     for(j=i;j<=flag;j++)
     {
     if(a[i]+a[j]==n)
     {printf("%d %d\n",a[i],a[j]);
     break;  
     }
     }
     }
     return 0;
}
