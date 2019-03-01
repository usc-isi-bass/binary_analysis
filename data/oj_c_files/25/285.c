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
    int n,i,c=0,j;
    int B[300]={0};
    B[1]=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       for(j=1;j<300;j++){
       	   B[j]=B[j]*2+c;
       	   c=0;
           if(B[j]>=10){
           	 B[j]-=10;
           	 c=1;
           }
	   }
    }
    for(i=288;i>0;i--){
    	if(B[i]!=0){
	      break;
	    }
    }
    for(j=i;j>0;j--){
    	printf("%d",B[j]);
    }
	return 0;
}