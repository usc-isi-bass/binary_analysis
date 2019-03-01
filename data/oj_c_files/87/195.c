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
int a,b,c,d,e,f,i,sum;
for(i=1;i++;){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(d==0)   {break;}
else {
sum=60-c+f+(60-b-1)*60+e*60+(12+d-a-1)*3600;
printf("%d\n",sum);
}
}
return 0;
}
