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

int main()
{
	int f(int M, int N);
	int M,N,K,t,i;
	cin >> t;
	for(i = 1 ; i <= t ; i++)
	{
		cin >> M >> N;
		K = f(M,N);
		cout << K << endl;
	}
	return 0;
}
int f(int M, int N)
{
	if(N == 1)
	{
		return 1;
	}
	else if(M >= N)
	{
		return f(M,N - 1) + f(M - N,N);
	}
	else
	{
		return f(M,N - 1);
	}
}