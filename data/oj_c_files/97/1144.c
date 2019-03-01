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
	int sum,n=0;
	scanf("%d",&sum);
	while(sum>=100){
		n++;
		sum-=100;
	}
	printf("%d\n",n);
	n=0;
    while(sum>=50){
		n++;
		sum-=50;
	}
	printf("%d\n",n);
	n=0;
    while(sum>=20){
		n++;
		sum-=20;
	}
	printf("%d\n",n);
	n=0;
	while(sum>=10){
		n++;
		sum-=10;
	}
	printf("%d\n",n);
	n=0;
    while(sum>=5){
		n++;
		sum-=5;
	}
	printf("%d\n",n);
	n=0;
    while(sum>=1){
		n++;
		sum-=1;
	}
	printf("%d\n",n);
	return 0;
}