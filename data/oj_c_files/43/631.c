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

int isprime(int n)
{
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
		return 1;
}
int main()
{
	int m,i;
	scanf("%d",&m);
	if((m%2==0)&&(m>=6)&&(m<=10000))
	{
		for(i=3;i<=m/2;i=i+2)
		{
			if(isprime(i)&&isprime(m-i))
				printf("%d %d\n",i,m-i);
		}
	}
	return 0;
}