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

int shu(int a);

int main(){
	int n,r;
	scanf("%d",&n);
	if(n==1){printf("End\n");return 0;}
	if(n%2==0){
		r=n/2;
		printf("%d/2=%d\n",n,r);
	}  
	if(n%2!=0){
		r=n*3+1;
		printf("%d*3+1=%d\n",n,r);
	}
	while(r!=1){
		r=shu(r);
	}
	if(r==1){
		printf("End\n");
	}
	return 0;
}



int shu(int a){
	int q;
	if(a%2==0){
			q=a/2;
            printf("%d/2=%d\n",a,q);
			return q;
		}
	if(a%2!=0){
			q=a*3+1;;
            printf("%d*3+1=%d\n",a,q);
			return q;
		}
	}
