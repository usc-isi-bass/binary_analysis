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
int n,i,a,b,c,d;
scanf("%d",&n);
c=0;
d=0;
for(i=1;i<=n;i++){
scanf("%d%d",&a,&b);
if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
c++;
}else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){
d++;
}else if(a==b){
    c=c;
    d=d;
}
}
if(c>d){
printf("A");
}
else if(c<d){
printf("B");
}else if(c=d){
printf("Tie");
}
return 0;
}

