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

int mem[30]={0,1,1};
int fib(int a)
{
	if(a<=2)return 1;
	if(mem[a]!=0)return mem[a];
	int result;
	result=fib(a-1)+fib(a-2);
	mem[a]=result;
	return result;
}
int main()
{
	int n,a,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		cout<<fib(a)<<endl;
	}
	return 0;
}
