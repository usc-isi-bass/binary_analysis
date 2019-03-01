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
	int ways(int a, int min);
	int n,b;
	scanf("%d",&n);
	while(n-->0)
	{
		scanf("%d",&b);
		printf("%d\n",ways(b,2));
	}
}
int ways(int a, int min)
{
	if(a<min) return 0;
	int sum=0,i;
	for(i=min;i<=sqrt(a*1.0);i++)
	{
		if(a%i == 0)
			sum = sum + ways(a/i, i);
	}
	return sum+1;
}