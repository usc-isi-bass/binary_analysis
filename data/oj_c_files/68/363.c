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
	int i,n;
	char sieve[50001];
	sieve[0]=0;
	sieve[1]=0;
	for (i=2;i<50001;i++) sieve[i]=1;
	for (i=2;i<sqrt(50001);i++)
	{
		if (sieve[i]==1)
		{
			for (n=i*i;n<50001;n+=i)
			{
				sieve[n]=0;
			}
		}
	}
	int input;
	scanf("%d",&input);
	for (i=6;i<=input;i+=2)
	{
		for (n=3;n<i;n++)
		{
			if (sieve[n]==1&&sieve[i-n]==1)
			{
				printf("%d=%d+%d\n",i,n,i-n);
				break;
			}
		}
	}
}
