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
int s[6],N=0;
for(int i=0;i<1000;i++){
for(int j=0;j<6;j++){
scanf("%d",&s[j]);
}
if(s[0]!=0){
N=(s[3]+11-s[0])*3600+(s[4]+59-s[1])*60+(s[5]+60-s[2]);
printf("%d\n",N);
}else
break;
}
return 0;
}
