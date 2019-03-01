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

int prime(int n)
{
	int i,flag = 0;
	if(n%2)
	{
		for(i = 3;i <= sqrt((double)n); i+=2)
		{
			if(n%i==0){
				flag = 1;
				break;
			}
		}
		if(flag)return 0;
		else return 1;
	}
	else return 0;
}

int main()
{
	int n,i;
	cin>>n;
	for(i = 3;i <= n/2;i+=2)
	{
		if(prime(i)&&prime(n-i))
			cout<<i<<' '<<n-i<<endl;
	}
	return 0;
}