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

int f(int M,int N);
int main()
{
	int M,N,K,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&M,&N);
		K=f(M,N);
		printf("%d\n",K);
	}
	return 0;
}
int f(int M,int N)
{
	if(M==0) return 1;
	if(N==1) return 1;
	if(M<N) return f(M,N-1);
	else return f(M-N,N)+f(M,N-1);
}