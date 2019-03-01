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
	int i,x,y,m=0;
	double n;
	char a[501],b[501];
	scanf("%lf\n",&n);
	gets(a);
	gets(b);
	x=strlen(a);
	y=strlen(b);
	if(x==y){
		for(i=0;i<x;i++){
			if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T'){
				printf("error");
				break;
			}else{
				if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'){
					printf("error");
					break;
				}else{
					if(a[i]==b[i])
						m++;
			}}
			if(i==x-1){
				if(1.0*m/x>n){
					printf("yes");
				}else{
					printf("no");
		}}}
	}else{
		printf("error");
	}
	return 0;
}