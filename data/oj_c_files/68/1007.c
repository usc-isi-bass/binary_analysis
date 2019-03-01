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

int f(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)break;
		if(i>sqrt(x))return 1;
		return 0;
}
int main()
{
	int n,i,j;
	scanf("%ld",&n);
	
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<=i/2;j+=2)
		{			
			if(f(j)&&f(i-j))
			{
				printf("%ld=%ld+%ld\n",i,j,i-j);
			    
				break;
			}
		}
		
		
	}
	return 0;
}
