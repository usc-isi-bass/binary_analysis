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

int a[22]={0,1,1};
int fibo(int n){
	if(n==1||n==2)return 1;
	else if(a[n]==0)a[n]=fibo(n-1)+fibo(n-2);
	return a[n];
}
void main()
{
	int n,cases;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d",&n);
		printf("%d\n",fibo(n));
	}
}