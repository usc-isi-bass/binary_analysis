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
   int a,b,c,d,e,f,s,i=1;
   while(i){
   scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
   i=a;
   if(i==0){
   break;}
   s=f-c+(e-b)*60+(d-a+12)*3600;
printf("%d\n",s);
}
return 0;
}



