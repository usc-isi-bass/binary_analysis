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
	int if_k_is(int);
	int n;
	cin>>n;
	int sum=0;
	for(int k=1;k<=n;k++)
	{
		if(if_k_is(k))
			sum+=k*k;
	}
	cout<<sum<<endl;
	return 0;
}

int if_k_is(int k)
{
	if(k%7==0)
		return 0;
	while(k!=0)
	{
		if(k%10==7)
			return 0;
		k=k/10;
	}
	return 1;
}