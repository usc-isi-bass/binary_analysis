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
int n,sum=0,k;//????
scanf("%d",&n);//??N
for(k=1;k<=n;k++){
if (yuqiwuguan(k)==1){//???wu???????????
sum+=k*k;}
}
printf("%d",sum);//????
return 0;
}
int yuqiwuguan(int number){ 
int i;                       //???7?????
if(number%7==0){
return 0;}
for(i=number;i>0;i/=10){
if(i%10==7)
return 0;}
return 1;
}
