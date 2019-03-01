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

int reverse(int num){

int k=0;
if(num>=0){
while(num>0){
k=k*10+num%10;
num=num/10;
}
k=k+num;
}

else
{
num=0-num;
while(num>0){
k=k*10+num%10;
num=num/10;
}
k=0-k+num;

}
return k;
}
main(){
int i,n;
i=0;
for(i=0;i<6;i++){
scanf("%d",&n);
printf("%d\n",reverse(n));
}
}
