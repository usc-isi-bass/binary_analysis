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
int n,i,j,t,max,min;
int a[50000],b[50000],c[10000];
t=1;
max=1;
min=10000;
scanf("%d",&n);
for (i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
if (a[i]<min){
min=a[i];
}
if (b[i]>max){
max=b[i];
}
for (j=a[i];j<b[i];j++){
c[j]=1;
}
}
for (j=min;j<max;j++){
if (c[j]!=1){
t=0;
}
}
if (t==0){
printf ("no");
}else{
printf ("%d %d",min,max);
}
return 0;
}