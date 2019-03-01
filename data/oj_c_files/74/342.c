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

int f(long n){
	int i;
	for(i=sqrt(n+.1);i>1;i--)
		if(n%i==0)return 0;
	return 1;
}
int g(long n){
	int a[10],i=0,j;
	while(n)
		a[i++]=n%10,n/=10;
	for(j=0,i--;j<i;j++,i--)
		if(a[j]!=a[i])return 0;
	return 1;
}
void main(){
	long m,n,i,t=0;
	scanf("%ld%ld",&m,&n);
	for(i=m;i<=n;i++)
		if(f(i)&&g(i)){
			if(t)printf(",");
			else t=1;
			printf("%ld",i);
		}
	if(!t)printf("no");
}