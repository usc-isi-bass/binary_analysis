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
   int n;
   scanf("%d",&n);
   int a[20];
   int i,m;
   for(i=0;i<n;i++){
		 scanf("%d",&a[i]);
   }
   int sz[20];
   for(i=0;i<20;i++){
    	 if(i==0){
		     sz[i]=1;
		 }else if(i==1){
			 sz[i]=1;
		 }else{
			 sz[i]=sz[i-1]+sz[i-2];
		 }
   }
   for(i=0;i<n;i++){
    	 if(i==n-1){
		     m=a[i];
		     printf("%d",sz[m-1]);
			 m=0;
		 }else{
			 m=a[i];
		     printf("%d\n",sz[m-1]);
			 m=0;
		 }
	}
	return 0;
}
	