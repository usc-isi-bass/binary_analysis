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
int n, m, i, j;
scanf ("%d", &n);
int x[n], y[n];
m=0;
for (i=1;i<=n;i++){
scanf ("%d", &x[i]);
if (x[i]%2==1){
m=m+1;
y[m]=x[i];}}
for (i=1;i<=m;i++){
for (j=i;j<=m;j++){
if (y[i]>y[j]){
n=y[i];
y[i]=y[j];
y[j]=n;}}
if (i>1){printf (",");}
printf ("%d", y[i]);}
return 0;}