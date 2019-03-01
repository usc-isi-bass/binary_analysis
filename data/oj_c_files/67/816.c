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
float x,y,a[2],b[2];
scanf("%f%f",&a[0],&a[1]);
x=a[1]/a[0];
int i;
for(i=0;i<n-1;i++){
scanf("%f%f",&b[0],&b[1]);
y=b[1]/b[0];
if(y-x>0.05)
printf("better\n");
else if(x-y>0.05)
printf("worse\n");
else
printf("same\n");
}
return 0;
}