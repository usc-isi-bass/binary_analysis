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

int N;
int K;
int Monkey(int m,int n,int k)
{
	if(n==1)
		return (m%N==k&&(m-k)/N>=1)?1:0;
	else{
		if(m%N==k)
			return Monkey( (m-k)*(N-1)/N,n-1,k);
		else
			return 0;
	}
}

void main()
{
	int m;
	scanf("%d%d",&N,&K);
	for(m=(int)(pow(N,K)/pow(N-1,K-1));;m++){
		if(Monkey(m,N,K))
			break;
	}
	printf("%d\n",m);
}