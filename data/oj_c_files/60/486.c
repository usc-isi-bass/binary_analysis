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

void main()
{
	int n,s=0,i;
	scanf("%d",&n);
	int isPrime(int i);
	for(i=3;i<=n-2;i++)
	{
		if(isPrime(i)&&isPrime(i+2))
		{
			printf("%d %d\n",i,i+2);
			s++;
		}
	}
	if(s==0)printf("empty\n");
}
int isPrime(int i)
{
	int j;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			return 0;
		}

	}
	return i;
}