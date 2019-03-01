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
   int n,x;
   scanf("%d",&n);
   x=n/100;
   printf("%d\n",x);
   n=n-x*100;
   x=n/50;
  printf("%d\n",x);
  n=n-x*50;
  x=n/20;
  printf("%d\n",x);
  n=n-x*20;
  x=n/10;
  printf("%d\n",x);
n=n-x*10;
  x=n/5;
  printf("%d\n",x);
n=n-x*5;
  x=n;
  printf("%d",x);
  return 0;
}


   