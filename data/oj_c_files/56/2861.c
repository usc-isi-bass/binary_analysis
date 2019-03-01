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

int main( ){
	int n,y;
	int t=0;
	
	scanf("%d",&n);
	if(n>10000){
		int i=4;
    for(int num=n;num>0;num/=10){
	y=pow(10,i);
	t=t+num%10*y;
	i=i-1;
	}
	}
	else if(n>1000){
	int i=3;
    for(int num=n;num>0;num/=10){
	y=pow(10,i);
	t=t+num%10*y;
	i=i-1;
	}
	}
		else if(n>100){
	int i=2;
    for(int num=n;num>0;num/=10){
	y=pow(10,i);
	t=t+num%10*y;
	i=i-1;
	}
		}
	else if(n>10){
	int i=1;
    for(int num=n;num>0;num/=10){
	y=pow(10,i);
	t=t+num%10*y;
	i=i-1;
	}
	}
	else if(n>1){
	t=n;
	}
	printf("%d",t);
	
	return 0;
}