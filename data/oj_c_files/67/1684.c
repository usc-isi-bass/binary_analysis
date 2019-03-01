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

int main()
{
int n, i, ZS[NUMBER], YX[NUMBER];
double x, y;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&ZS[i],&YX[i]);}
x=(1.000*YX[0])/ZS[0];
for(i=1;i<n;i++){
y=(1.000*YX[i])/ZS[i];
if(y-x>0.05){
printf("better\n");}
else if(x-y>0.05){
printf("worse\n");}
else{
printf("same\n");}
}
return 0;
}


