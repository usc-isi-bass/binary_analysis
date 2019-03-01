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

int fibonacci(int n)
{
	int x;
	if(n==1||n==2){
		x=1;
	}
	else{
		x=fibonacci(n-1)+fibonacci(n-2);
	}
	return x;
}

int main()
{
	int n,i,m,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		m=fibonacci(a);
		printf("%d\n",m);
	}
	return 0;
}
