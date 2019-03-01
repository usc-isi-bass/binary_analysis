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


int cal(int M, int N)
{
    int i;
	int num=0;
	if(M==1) return 0;
	if(N>=M) return ( 1+cal(M,M-1));
	for(i=2;i<M;i++)
	{
		if(M%i==0&&i<=N) num=num+cal(M/i,i);
	}
	return num;
}
int main()
{
	int n,M;
	cin>>n;
	while(n--)
	{
		cin>>M;
		cout<<cal(M,M)<<endl;
	}
	return 0;
}

