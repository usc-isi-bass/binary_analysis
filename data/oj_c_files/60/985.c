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

// shang.cpp : Defines the entry point for the console application.
//

int sushu(int x){
	int i,count=0,result;
	for(i=2;i<x;i++){
		if(x%i==0){
			count++;
		}
	}
	if(count==0){
		result=1;
	}
	else{
		result=0;
	}
	return result;
}
int main(int argc, char* argv[])
{
	int n,i,sum=0;
	scanf("%d",&n);
	int sushu(int x);
	for(i=2;i<=n-2;i++){
		if(sushu(i)){
			if(sushu(i+2)){
				printf("%d %d\n",i,i+2);
				sum++;
			}
		}
	}
	if(sum==0){
		printf("empty");
	}
	return 0;
}

