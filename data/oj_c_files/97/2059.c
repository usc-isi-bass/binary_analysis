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
printf("%d\n",n/100);
n=n-n/100*100;
if (n>=50){
printf("%d\n",n/50);
n=n-n/50*50;
}else{
printf("0\n");
}
if (n>=20){
printf("%d\n",n/20);
n=n-n/20*20;
}else{
printf("0\n");
}
if(n>=10){
printf("%d\n",n/10);
n=n-n/10*10;
}else{
printf("0\n");
}
if(n>=5){
printf("%d\n",n/5);
n=n-n/5*5;
}else{
printf("0\n");
}
printf("%d\n",n);
return 0;
}