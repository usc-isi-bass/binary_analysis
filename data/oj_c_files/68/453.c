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

int isprime(int x);
int main()
{
	int n,a;
	scanf("%d",&n);
	a=6;
	while(a<=n)
	{
		int b;
		for(b=3;b<=a/2;b+=2)
		{if(isprime(b)&&isprime(a-b))
		{printf("%d=%d+%d\n",a,b,a-b);break;}}
		a+=2;
	}
}
int isprime(int x)
{
	int y,s;
	s=sqrt(x);
	for(y=3;y<=s;y++)
		if(x%y==0) return 0;
		if(y>=s+1) return 1;
}