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

int a[30] = {0};
int fibo(int n)
{
	if(a[n] != 0)
		return a[n];
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	a[1] =1;
	a[2] = 1;
	
	int n;
	cin>>n;
	while(n--)
	{
		int k;
		cin>>k;
		cout<<fibo(k)<<endl;
	}
	return 0;
}