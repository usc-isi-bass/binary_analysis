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
	int a,b,i,n,m;
	int x[200];
	int y[200];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d%d",&(x[i]),&(y[i]));
	}
a=0;
b=0;
	for(i=0;i<=n-1;i++){
		m=x[i]-y[i];
		if(m==-1||m==2){
			a++;
		}
		if(m==1||m==-2){
			b++;}
	}
	if(a>b){
		printf("A");
	}
	if(a==b){
		printf("Tie");}
	if(a<b){
		printf("B");}
	return 0;
}