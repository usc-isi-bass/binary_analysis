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

int F(int n);
int main()
{
 int n,b,p,q;
scanf("%d",&p);
for (q=0;q<p;q++){
 scanf("%d",&n);
 b=F(n);
 printf("%d\n",b);
}

  return 0;
}
int F(int n){
    int a[100],i;
    a[1]=1;
    a[2]=1;
    a[3]=2;
    if(n>3){
    for(i=3;i<=n;i++){
    a[i]=a[i-1]+a[i-2];
}
return a[n];
}

if (n==1||n==1){
return 1;
}
}