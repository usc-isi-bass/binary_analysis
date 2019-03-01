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

int apple (int M, int N)
{
	int sum=0;
	if (M==1||N==1)
		return 1;
	if (M<N)
	{
		N=M;
		sum+=apple(M,N);
		return sum;
	}
	if (M==N)
	{
		sum+=apple(M,N-1);
		sum++;
	}
	else 
	{
		sum+=apple(M-N,N);
		sum+=apple(M,N-1);
	}
	return sum;
}
int main ()
{
	int times,M,N,i;
	cin >> times ;
	for (i=0;i<times;i++)
	{
		cin >> M >> N ;
		cout << apple (M,N) << endl;
	}
	return 0;
}