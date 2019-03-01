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
int n,m,x=1,y=0;
for(;;)
{
x=1;y=0;
scanf("%d %d",&n,&m);
if (n==0) return 0;
int b[n+1];
for (int j=1;j<=n;j++) b[j]=0;
for(int i=1;;i++)
   {
   if (i==n+1) i=1;
   if (b[i]==1) continue;
   if (x==m) 
     {
     b[i]=1;
     y++;
     x=0;
     }
   x++;
   if (y==n) {x=i;break;}
   }
printf("%d\n",x);
}
}
