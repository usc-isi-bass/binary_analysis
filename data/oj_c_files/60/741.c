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

int F(int a);
int main()
{
	int n,r=0,i;
	scanf("%d",&n);
	for(i=2;i<n-1;i++){
		if(F(i)&&F(i+2)){
			printf("%d %d\n",i,i+2);
			r++;
		}
		if(i==n-2&&r==0){
			printf("empty");
		}
	}
	return 0;
}
int F(int a){
	int j;
	for(j=2;j<a;j++){
		if(a%j==0){
			return 0;
		}
		else if(j==a-1&&a%j!=0){
			return 1;
		}
	}
}