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
	int a;
	int b,i;
	scanf("%d",&a);
	b=a;
	for(i=0;b!=1;i++){
		if(a%2==0){
			b=a/2;
			if(i==0){
				printf("%d/2=%d",a,b);
			}
			else if (i!=0){
				printf("\n%d/2=%d",a,b);
			}
		}
		else if(a%2!=0) {
			b=a*3+1;
			if(i==0){
				printf("%d*3+1=%d",a,b);
			}
			else if(i!=0){
				printf("\n%d*3+1=%d",a,b);
			}
		}
		a=b;
	}
	printf("\nEnd");
	return 0;
}