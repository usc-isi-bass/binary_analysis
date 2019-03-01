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

int sushu(int a)
{   int x=0;
	for(int i=2;i<a;i++)
	{
		if(a%i==0) x=1;
	}
	return x;
}
int main()
{
	int n,i,a,b,x,y,s=0;
	scanf("%d",&n);
	if (n<5) printf("empty\n");
	for (i=3;i<=n-2;i++)
	{
		a=i;
		b=i+2;
		x=sushu(a);
		y=sushu(b);
		if (x+y==0)
		{
			printf("%d %d\n",a,b);
			s=1;
		}
		if(s==0) printf("empty");
	}
	return 0;
}
		