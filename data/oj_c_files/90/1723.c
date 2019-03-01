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

void main(){
	int t,i;
	int M[21],N[21];
	scanf("%d",&t);
	int f(int M,int N);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&M[i],&N[i]);
		printf("%d\n",f(M[i],N[i]));
	}
}

int f(int M,int N)
{
	int c;
	if(N==1||M==1||M==0) c=1;
	else if(M>=N)
	{
		c=f(M,N-1)+f(M-N,N);
	}
	else c=f(M,N-1);
	return c;
}