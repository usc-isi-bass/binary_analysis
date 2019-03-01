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
	int num[500],n,i,j=0,k=0,l=0,a;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(j=0;j<n;j++){
		for(i=0;i<n-1;i++){
			if(num[i]>num[i+1]){
				a=num[i+1];
				num[i+1]=num[i];
				num[i]=a;
	}
		}
	}
	for(i=0;i<n;i++){
        if(num[i]%2!=0){
           k++;}
	}
      	for(i=0;i<n;i++){ 
			 if(num[i]%2!=0){
				 l++;
					 if(l<k){
						 printf("%d,",num[i]);}
					 else{
						 printf("%d",num[i]);}
			 }
		}
   return 0;
	}