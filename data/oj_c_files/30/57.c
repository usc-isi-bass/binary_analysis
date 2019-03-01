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



main() {
   int n;
   int a,b,c,i;
   int t=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
if(i%7==0) a=0;
else                    
{
a=i;
b=(int)(i/10);
if(b==7)a=0;
else 
  {
a=i;
c=i-b*10;
if(c==7)a=0;
else a=i;
  }
}
t=t+a*a;              }
printf("%d",t);
}
