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

int main () {
int n,i;
double c,d;
scanf("%d",&n);
int a[100];
int b[100];
scanf("%d %d",&a[0],&b[0]);
c=b[0]*1.0000/a[0];
for(i=1;i<n;i++){
   scanf("%d %d",&a[i],&b[i]);
   d=b[i]*1.0000/a[i];
   if(d-c>0.05)
   printf("better\n");
   else if(c-d>0.05)
    printf("worse\n");
   else
   printf("same\n");
}


return 0;
}