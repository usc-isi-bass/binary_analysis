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
int w,sz[12],m,i;
scanf("%d\n",&w);
sz[1]=w+12;
sz[2]=w+12+31;
sz[3]=w+12+31+28;
sz[4]=w+12+31+28+31;
sz[5]=w+12+31+28+31+30;
sz[6]=w+12+31+28+31+30+31;
sz[7]=w+12+31+28+31+30+31+30;
sz[8]=w+12+31+28+31+30+31+30+31;
sz[9]=w+12+31+28+31+30+31+30+31+31;
sz[10]=w+12+31+28+31+30+31+30+31+31+30;
sz[11]=w+12+31+28+31+30+31+30+31+31+30+31;
sz[12]=w+12+31+28+31+30+31+30+31+31+30+31+30;
for(i=1;i<=12;i++){
m=sz[i]%7;
if(m==5){
printf("%d\n",i);
}
}
return 0;
}