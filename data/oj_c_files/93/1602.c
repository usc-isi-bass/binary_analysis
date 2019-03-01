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

int main()
{   
	int a;
	scanf("%d",&a);
    if(a%3==0){
		printf("3");
	    for (int i=5;i<8;i+=2){
		if(a%i==0){
			printf(" %d",i);
		}
		}
	}else {
		if(a%5==0 && a%7==0){
			printf("5 7");
		}else if(a%5==0 && a%7!=0){
			printf("5");
		}else if(a%5!=0 && a%7==0){
			printf("7");
		}else{
			printf("n");
		}
	}
	return 0;
}