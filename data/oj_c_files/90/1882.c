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

int apple(int x,int y);
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
					 int M,N,K;
					 scanf("%d %d",&M,&N);
					 K=apple(M,N);
					 printf("%d\n",K);
					 } 
    return 0;
}

int apple(int x,int y){
	int a=0,b=0,result;
	if(x==1||y==1){
			 result=1;
			 }
    else{
		 if(x<=0||y<=0){
		 				return 0;
						}
	     else if(x<=y){
                  y=x;
                  a=apple(x,y-1);
                  result=1+a;
                  }
         else{
		 a=apple(x,y-1);
		 b=apple(x-y,y);
		 result=a+b;}
		 }
    return result;
}