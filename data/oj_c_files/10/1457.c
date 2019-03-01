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
   int n,i,j,*b,max,maxn=0,*a;
   scanf("%d",&n);
   a=(int *)malloc(sizeof(int)*n);
   b=(int *)malloc(sizeof(int)*n);
   for (i=0;i<n;i++)
     {
         scanf("%d",a+i);
         b[i]=0;
     }
   for (i=n-1;i>-1;i--)
   {
       max=0;
       for (j=n-1;j>i;j--)
         if (a[j]<=a[i]&&b[j]>=max)
           max=b[j];
       b[i]=max+1;
       if (b[i]>maxn)
         maxn=b[i];
   }
   printf("%d\n",maxn);
}
