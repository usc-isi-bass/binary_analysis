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

int f(int a);
int main()
{
   int n,a,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       scanf("%d",&a);
       printf("%d\n",f(a));
   }
   return 0;
}
int f(int a){
    if(a==1||a==2){
       return 1;
    }
    int b,c,d,k;
    c=1;
    d=1;
    for(k=3;k<=a;k++){
        b=c;
        c=d;
        d=b+c;
    }
    return d;
}
   