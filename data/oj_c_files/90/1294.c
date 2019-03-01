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

/*
 * ??????????
 * ??          ???
 * ????: 2011-11-28
 * ??????M????????N?????????????????????????????????
 *
 */



int Calc(int M,int N)
{
int sum=0;

if(M==0)
	{
	sum=1;
	return sum;
	}
if(N==1)
	{
	sum=1;
	return sum;
	}
if(M<N) sum=Calc(M,N-1);
else sum=Calc(M-N,N)+Calc(M,N-1);
return sum;
}

int main ()
{
	int t,i,M,N;

	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>M>>N;
		cout<<Calc( M, N)<<endl;
	}
	return 0;
}

