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
   int a,date,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   scanf("%d",&a);
   //printf("%d",a);
   int i,b=a-1;
   for(i=1;i<=12;i++){
	   date=0;
	   while(date<m[i]){
		       date++;
		if(b<7) b++;
		else b=1;
		//printf("%d %d\n",date,b);
		if(date==13 && b==5){
			printf("%d\n",i);
		}
	  }
   }
   return 0;
}