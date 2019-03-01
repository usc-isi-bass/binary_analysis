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
int n,t=0;
scanf("%d",&n);
if(n%3==0){
t=t+3;}
if(n%5==0){
t=t+5;}
if(n%7==0){
t=t+7;}
if(t==0){
printf("n");}
if(t==3){printf("3");}
if(t==5){printf("5"); }
if(t==7){printf("7");}
if(t==8){printf("3 5"); }
if(t==10){printf("3 7");}
if(t==12){printf("5 7");}
if(t==15){printf("3 5 7");}

return 0;
}