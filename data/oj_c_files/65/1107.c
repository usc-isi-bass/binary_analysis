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
	int n,i,k=0,l=0;
	int a[200],b[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
         scanf("%d%d",&a[i],&b[i]);
		 if(a[i]==1){
			 if(b[i]<a[i]){
				 l=l+1;
			 }
			 else if(b[i]>a[i]){
                 k=k+1;
			 }
		 }
        if(a[i]==2){
			 if(b[i]==0){
				 k=k+1;
			 }
			 else if(b[i]==1){
                 l=l+1;
			 }
		 }
       if(a[i]==0){
			 if(b[i]==1){
				 k=k+1;
			 }
			 else if(b[i]==2){
                 l=l+1;
			 }
		 }
	   }
	if(k>l){
		printf("A");
	}
	else if(k<l){
		printf("B");
	}
	else if(k==l){
		printf("Tie");
	}
	return 0;
}