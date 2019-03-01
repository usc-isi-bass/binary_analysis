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
	int a[200],n,i,b[200],s=0,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==0){
			if(b[i]==1){
				s++;
			}else if(b[i]==2){
				t++;
			}
		}else if(a[i]==1){
			if(b[i]==2){
				s++;
			}else if(b[i]==0){
				t++;
			}

		}else{
			if(b[i]==0){
				s++;
			}else if(b[i]==1){
				t++;
			}
		}
	}
	if(s>t){
		printf("A");
	}else if(s<t){
		printf("B");
	}else{
		printf("Tie");
	}
	

			


	return 0;
}
