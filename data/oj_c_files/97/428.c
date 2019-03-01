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

int main(){
   int a,b,c,d,e,f,g,x,y,z,h,i,j;
   scanf("%d",&a);
   z=a%100;
   x=a-z;
   b=x/100;
   y=z%50;
   x=z-y;
   c=x/50;
   z=z-x;
   x=z%20;
   y=z-x;
   d=y/20;
   z=x%10;
   y=x-z;
   e=y/10;
   y=z%5;
   x=z-y;
   f=x/5;
   g=y;
   printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f,g);
return 0;
}