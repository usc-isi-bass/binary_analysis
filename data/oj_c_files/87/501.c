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
int a,b,c,d,e,f,m,i;
for(i=0;i<=100;i++){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
    return 0;
}else{
d=d+12;
m=(d-a)*60*60;
if(e>=b){
    m=m+((e-b)*60);
}else{
    m=m-((b-e)*60);
}
if(f>=c){
    m=m+f-c;
}else{
    m=m+f-c;
}
printf("%d\n",m);
}
}
return 0;
}