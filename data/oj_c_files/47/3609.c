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
int a[100];
int i;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int x;
x=n/2;
int y;
for(i=0;i<n-x;i++){
y=a[i];
a[i]=a[n-i-1];
a[n-i-1]=y;
}
for(i=0;i<n-1;i++){
printf("%d ",a[i]);
}
printf("%d",a[n-1]);
return 0;
}