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
int n, i;
scanf ("%d", &n);
float a[n], e[n];
for(i=1;i<=n;i++){
scanf ("%f %f", &a[i], &e[i]);
if (i>1){
if (e[i]/a[i]>0.05+e[1]/a[1]){
printf ("better");
printf ("\n");}
else if (e[i]/a[i]<e[1]/a[1]-0.05){
printf ("worse");
printf ("\n");}
else printf("same\n");}}
return 0;}