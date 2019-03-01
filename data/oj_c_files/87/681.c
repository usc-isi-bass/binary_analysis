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

int main (){
     int a,b,c,d,e,f,num;
      scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	 while(a!=0){
		 num=0;
         d=d+12;
        num=num+3600*(d-a-1);
		num=num+3600-b*60-c;
        num=num+60*e+f;
        printf("%d\n",num);
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	 }
return 0;
}