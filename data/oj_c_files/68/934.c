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

int main(int argc, char* argv[])
{
	long int zhi(long int n);
	long int n,k=6,i;
	scanf("%ld",&n);
	while (k<=n)
	{
		for(i=2;i<k;i++)
		{
			if (zhi(i))
				if (zhi(k-i))
				{
				printf("%ld=%ld+%ld\n",k,i,k-i);
			break;
				}
		}
		k=k+2;
	}
	return 0;
}
long int zhi(long int n)
{
	long int i;
	if (n%2==0)
		return 0;
	for (i=3;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			return 0;
		break;
		}
	}
	return 1;
}



