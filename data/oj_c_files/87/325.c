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
     int a,b,c,d,e,f,h,i;
	 for(i=0;i<10000;i++){
	 scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	 if(a!=0){
	 h=(d+12-a)*3600+(e-b)*60+f-c;
	 printf("%d\n",h);}
	 else {break;}
	 }
     return 0;
}