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

int num[30]={0,1,1};
void fib()
{
for(int i=2;i<30;i++)
	num[i]=num[i-1]+num[i-2];	
	
}
int main()
{
	int n;
	cin>>n;
	fib();
	while(n--)
	{
		int a;
		cin>>a;
		cout<<num[a]<<endl;
	}
	return 0;
}
