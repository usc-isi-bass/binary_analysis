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

int f(int a,int min){
	if(a<min)
		return 0;
	int sum=1;
	for(int i=min;i<a;i++){
		if(a%i==0)
			sum+=f(a/i,i);
	}
	return sum;
}
int main(){
	int n;
	int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		a[i]=f(a[i],2);
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
