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

int isprime(int p);
int main(){
	int m,a,b,prime1,prime2;
	scanf("%d",&m);
	for(a=3;a<=m/2;a=a+2){
		b=m-a;
		prime1=isprime(a);
		prime2=isprime(b);
		if(prime1&&prime2)
			printf("%d %d\n",a,b);


	}

	return 0;
}

int isprime(int p){
	int i,isprime=1;
	if(p%2==0){
		if(p==2){
		return isprime;
	}
	isprime=0;
	return isprime;
	}

	for(i=3;i<p;i=i+2){
		if(p%i==0){
		isprime=0;
		break;
		}
	}
	return isprime;

}