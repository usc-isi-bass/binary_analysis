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


int sushu(int n){
	int m=(int)sqrt(n),i;
	for(i=3;i<=m;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(int argc, char* argv[])
{
	int n,i,num=0;
	scanf("%d",&n);
	for(i=3;i<=n-2;i+=2){
		if(sushu(i)==1&&sushu(i+2)==1){
			printf("%d %d\n",i,i+2);
			num++;
		}
	}
	if(num==0){
		printf("empty");
	}
	return 0;
}