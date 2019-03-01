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
	for( i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
		return 1;
		
}
void Gede(int n)
{
	int i;
	for(i=3;i<=(n/2);i++)
	{
		if((f(i))&&(f(n-i)))
		{
			printf("%d=%d+%d\n",n,i,n-i);
			break;
		}
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
			Gede(i);
		return 0;
}