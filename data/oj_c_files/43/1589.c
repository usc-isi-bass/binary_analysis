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
	int prime(int);
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
		if(prime(i)&&prime(n-i))
			printf("%d %d\n",i,n-i);

}

int prime(int n)
{
	int i,a=1;
	for(i=2;i<=sqrt(n)&&a==1;i++)
		if(n%i==0)
			a=0;
	return(a);
}