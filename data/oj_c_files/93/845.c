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
    int x,a,b,c;
    scanf("%d",&x);
	a=x%3;
	b=x%5;
	c=x%7;
	if(a==0&&b==0&&c==0){
		printf("3 5 7");
	}else if(a==0&&b==0&&c!=0){
		printf("3 5");
	}else if(a==0&&b!=0&&c==0){
		printf("3 7");
	}else if(a!=0&&b==0&&c==0){
		printf("5 7");
	}else if(a!=0&&b!=0&&c==0){
		printf("7");
	}else if(a!=0&&b==0&&c!=0){
        printf("5");
    }else if(a==0&&b!=0&&c!=0){
		printf("3");
    }else{
		printf("n");
	}
	return 0;
}