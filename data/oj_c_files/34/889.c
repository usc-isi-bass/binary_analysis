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
int a,e;
a=0;
scanf("%d",&n);
if(n==1){
	printf("End");
}
else if(n!=1){
	a=n;
	for(;a!=1;){
		if(a%2==0){
			e=a;
			a=a/2;
			printf("%d/2=%d\n",e,a);
			if(a==1){
				printf("End");
				break;
			}
		}
		else if(a%2==1){
			e=a;
			a=a*3+1;
			printf("%d*3+1=%d\n",e,a);
			if(a==1){
				printf("End");
			break;
			}
		}
	}
}
return 0;
}