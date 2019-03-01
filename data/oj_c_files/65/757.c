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
int n,a,b,A=0,B=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
scanf("%d%d",&a,&b);
{
if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
A=A+1;
}
else{
if(a!=b){
B=B+1;
}
}
}
}
if(A==B){
printf("Tie");
}
if(A>B){
printf("A");
}
if(B>A){
printf("B");
}
return 0;
}