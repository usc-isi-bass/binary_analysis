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

int ifunlucky(int d);
int main()
{
    int w,t;
    scanf("%d",&w);
    int m=1;
    for(m=1;m<=12;m++){
    t=ifunlucky(m);
    if((t+w-5)%7==0){
    printf("%d\n",m);
    }
    }
    return 0;
}
int ifunlucky(int d){
int k=0;
int i=1;
for(i=1;i<d;i++){
if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
k+=31;
}else if(i==2){
k+=28;
}else{
k+=30;
}
}
return k+12;
}

