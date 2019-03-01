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
int n,i,a,x,y;
i=1;
scanf("%d\n",&n);
if(n>1&&n<100){
while(i<=n){
scanf("%d\n",&a);
if(i==1){
x=a;
y=0;
}else if(a>x){
y=x;
x=a;
}else if(a>y&&a<x){
y=a;
}
i++;

}
printf("%d\n",x);
printf("%d\n",y);
}
return 0;
}
