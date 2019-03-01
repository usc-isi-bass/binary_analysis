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
	int n,i,a,b,p=0,q=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a==0&&b==1){
			p++;
		}
		if(a==0&&b==2){
			q++;
		}
		if(a==0&&b==0){
		//	printf("Tie\n");
		}
		if(a==1&&b==0){
			q++;
		}
		if(a==1&&b==1){
		//	printf("Tie\n");
		}
		if(a==1&&b==2){
			p++;
		}
		if(a==2&&b==0){
			p++;
		}
		if(a==2&&b==2){
		//	printf("Tie\n");
		}
		if(a==2&&b==1){
			q++;
		}
	}
	if(p==q){
		printf("Tie");
	}
	if(p>q){
		printf("A");
	}
	if(q>p){
		printf("B");
	}
	return 0;
}