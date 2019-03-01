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
	long n;
	scanf("%ld",&n);
	long su[25000];
	long i,j,num=0;
	for(i=2;i<25001;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				break;
		}
		if(j>sqrt(i))
		{
			su[num]=i;
			num++;
		}
	}
	long a,b;
	for(a=6;a<=n;a+=2)
	{
		for(i=0;;i++)
		{
			b=a-su[i];
			for(j=2;j<=sqrt(b);j++)
			{
				if(b%j==0)
					break;
			}
			if(j>sqrt(b))
				printf("%ld=%ld+%ld\n",a,su[i],b);
			if(j>sqrt(b))
				break;
		}
	}
	return 0;
}