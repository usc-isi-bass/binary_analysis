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


int a[10000];
int p;
void oppo(int n);
void printa(int n);
int main(){
	int n;
	scanf("%d",&n);
	oppo(n);
	printa(n);
	return 0;
}

void oppo(int n){
	for(int i1=0;i1<n;i1++){
		scanf("%d",&(a[i1]));
	}
	for(int i2=0;i2<n;i2++){
		for(int j=0;j<n-i2-1;j++){
			p=a[j];a[j]=a[j+1];a[j+1]=p;
		}
	}
}

void printa(int n){
	for(int i3=0;i3<n;i3++){
		if(i3==0){
			printf("%d",a[i3]);
		}else{
		printf(" %d",a[i3]);
		}
	}
}