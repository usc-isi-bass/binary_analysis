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


int isprime(int n);
void main()
{
	int n,i,last_isprime=0,this_isprime,empty=1;
	scanf("%d",&n);
	for(i=3;i<=n;i+=2){
		this_isprime=isprime(i);
		if(last_isprime&&this_isprime){
			printf("%d %d\n",i-2,i);
			empty=0;
		}
		last_isprime=this_isprime;
	}
	if(empty) printf("empty\n");
}
int isprime(int n)
{
	int i;
	if(n==3) return 1;
	for(i=3;i<n;i+=2)
		if(n%i==0) return 0;
	return 1;
}
