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
	int n,a=0;
	scanf("%d",&n);
	if(n==1){
	     printf("End");
	}
	else {
	for(int i=0;i<99999;i++){
		   a=n;
	       if(n%2==0){
		          n=n/2;
				  printf("%d/2=%d\n",a,n);
		   }else{
		          n=n*3+1;
				  printf("%d*3+1=%d\n",a,n);
		   }
		   if(n==1){
			   printf("End");
		          break;
		   }
		  
	}}
     return 0;
}
