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
   int n, i, a, b ,c;
   scanf("%d", &n);
   for(i=1,a=0,b=0;i<=n;i++){
   scanf("%d", &c);
   if(c>a)
      b=a,a=c;
   else if(c>b)
      b=c;
   }
   printf("%d\n", a);
   printf("%d", b);
   return 0;
}
    
   