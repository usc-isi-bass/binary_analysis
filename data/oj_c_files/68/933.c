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

int check(int n){
	int i;
	for(i=3;i*i<=n;i=i+2){
		if(n%i==0)break;
	}
	if(i*i>n)return 1;
	else return 0;
}

int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2){
		for(j=3;j<=i/2;j=j+2){
			if(check(j)!=0&&check(i-j)!=0){
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}