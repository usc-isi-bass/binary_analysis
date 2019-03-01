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
 int n,i,j,c=0,d,f,g[301];
 scanf("%d%d",&n,&g[1]);
 printf("%d",g[1]);
 c=1;
 for (i=2;i<=n;i++)
   {
   scanf("%d",&d);
   f=1;
   for (j=1;j<=c;j++)
     if (g[j]==d)
       {f=0;break;}
   if (f==1)
     {
     c=c+1;g[c]=d;printf(",%d",d);
     }
   }
 printf("\n");
 }