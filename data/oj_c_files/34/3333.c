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

int n;
void main()
{
	int s(int s),b(int b);
	scanf("%d",&n);
	for(;n!=1;)
	{
		if (n%2==0) s(n);
		else b(n);
	}
	printf("End");
}
int s(int s)
{
	n=n/2;
	printf("%d/2=%d\n",2*n,n);
    return n;
}
int b(int b)
{
	n=n*3+1;
	printf("%d*3+1=%d\n",(n-1)/3,n);
	return n;
}