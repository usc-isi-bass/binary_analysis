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

int main()
{
   int n,t,e,max,smax; 
   scanf("%d",&n);
   for(int i=0;i<n;i++){
   scanf("%d",&t);
   if(i==0){
   max=t;}
   if(i==1){
	   if(t>=max){
		  
   e=max;
   max=t;
   smax=e;
	   }
	   else{
		   smax=t;
	   }
   }
   if(i>>1){ 
	   if(t>=max){
   e=max;
   max=t;
   smax=e;
   }
   if(t>=smax&&t<max){
	   smax=t;
   }
 }
   }
   printf("%d\n%d",max,smax);
   return 0;
}