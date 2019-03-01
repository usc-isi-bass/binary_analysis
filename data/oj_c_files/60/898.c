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

int sushu(int x);
int main(){
	int n,j,m=0;
	scanf("%d",&n);
	for(j=3;j<=n-2;j=j+2){
        if(sushu(j)&&sushu(j+2)){
		   printf("%d %d\n",j,j+2);
		   m++;
		}
	}
	if(m==0)
		printf("empty");
	   
	return 0;

}
int sushu(int x){
	int i;
	for(i=2;i<=sqrt(x);i++){
        if(x%i==0)
			return 0;
	}
	return 1;
}