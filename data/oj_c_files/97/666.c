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
   int n;
   scanf("%d",&n);
   int s=n/100;
   int t=n%100;
   int y=t/50;
   int u=t%50;
   int a=u/20;
   int b=u%20;
   int c=b/10;
   int d=b%10;
   int e=d/5;
   int f=d%5;
   printf("%d\n%d\n%d\n%d\n%d\n%d\n",s,y,a,c,e,f);
return 0;
}