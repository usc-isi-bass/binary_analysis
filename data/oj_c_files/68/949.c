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


int isprime(int a)
{
	int i,k;
	if(a%2==0){
		return 0;
	}
    k=(int)sqrt(a);
	for(i=3;i<=k;i=i+2){
		if(a%i==0){
			return 0;
		}
	}

	return 1;
}


int main()
{
	int n,i,j;
    scanf("%d",&n);
	for(i=6;i<=n;i=i+2){
		for(j=2;j<=i/2;j++){
			if(isprime(j)&&isprime(i-j)){
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}

	return 0;
}
