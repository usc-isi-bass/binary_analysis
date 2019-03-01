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


int isprime (int a)
{
	int i;
	if(a==2)
		return 1;
	if((a!=2)&&(a%2==0))
		return 0;
	
	for(i=3;i<(int)sqrt(a)+1;i=i+2)
	{
		if(a%i==0)
			return 0;
	}

	return 1;
}

int main()
{
	int n,i;
    int k;
	
    scanf("%d",&n);
    for(k=6;k<=n;k=k+2)
	{
		for(i=3;i<k;i++)
		{
			if((isprime(i)==1)&&(isprime(k-i)==1))
			{
				printf("%d=%d+%d\n",k,i,k-i);
				break;
			}
		}
	}
		
return 0;
}
