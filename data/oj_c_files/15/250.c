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
{int n,i,j;
 scanf("%d\n",&n);
 int a[n],s=0,m=0,b;
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[0]);
   if(a[0]==0)
   {s=1;}
   else{s=0;}
  for(j=1;j<n;j++)
  {
   scanf(" %d",&a[j]);
   if(a[j]==0)
   {s++;}
  }
   if(s==2)
    {m++;}
    scanf("\n");            
 }
 b=m*m;
 printf("%d\n",b);
return 0;
}