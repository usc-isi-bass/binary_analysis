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
int n,i,a,b,A,B;
scanf("%d", &n);
a=0;
b=0;
for(i=1;i<= n;i++){
scanf("%d %d", &A,&B);
if(A==0&&B==0||A==1&&B==1||A==2&&B==2){
a=a;}
else if(A==0&&B==1||A==1&&B==2||A==2&&B==0){
a=a+1;}
else if(A==0&&B==2||A==1&&B==0||A==2&&B==1){
b=b+1;}}
if(a>b){printf("A");}
else if(a<b){printf("B");}
else if(a=b){printf("Tie");}
return 0;
}
