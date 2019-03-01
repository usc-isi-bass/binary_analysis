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
int Sum;

//whether it can satisfy the nth monkey's operation//
int Monkey(int n)
{
	if(n==0)
		return 1;
	else{
		if(Sum%(N-1)==0){
			Sum=Sum/(N-1)*N+K;
			return 1&&Monkey(n-1);
		}
		else
			return 0;
	}
}

void main()
{
	int m;
	scanf("%d%d",&N,&K);
	for(m=N-1;;m+=N-1){
		Sum=m;
		if(Monkey(N))
			break;
	}
	printf("%d\n",Sum
		);
}