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

void sx(int b[],int n);
void nx(int a[],int b[],int n);
int main(){
	int i=0,q,M[1001]={0},N[1001]={0};
	scanf("%d\n",&q);
	sx(M,q);
	nx(N,M,q);
	for(i=0;i<q-1;i++){
	printf("%d ",N[i]);
	}
	printf("%d",N[q-1]);
	return 0;
}
void sx(int b[],int n){
	int i;
		for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		}
}
void nx(int a[],int b[],int n){
	int i;
		for(i=n-1;i>-1;i--){
		a[i]=b[n-i-1];
		}
}
