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
   int a[288][288];
   int n,m,i,j,t,x,y;
   scanf("%d%d",&n,&m);
   for (i=1;i<=n;i++)
   for (j=1;j<=m;j++)
   scanf("%d",&a[i][j]);
   x=n,y=m;
   i=1;
   j=1;
   do
   {
   for (t=j;t<=y;t++) 
   printf("%d\n",a[i][t]);
   i=i+1;
   if (i>x) 
   break;
   for (t=i;t<=x;t++) 
   printf("%d\n",a[t][y]);
   y=y-1;
   if (y<j) 
   break;
   for (t=y;t>=j;t--) 
   printf("%d\n",a[x][t]);
   x=x-1;
   if (i>x) break;
   for (t=x;t>=i;t--) 
   printf("%d\n",a[t][j]);
   j=j+1;
   if (y<j) break;
   }
   while ((i<=x)&&(j<=y));
}
