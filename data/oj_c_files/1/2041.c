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

int fj(int n,int m)
{
	int i,j,k=0;
	if(n==1) return 1;
	for(i=m;i<=n;i++)
	{
		if(n%i==0)
		k+=fj(n/i,i);
	}
	return k;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(;n>0;n--)
	{
		scanf("%d",&i);
		printf("%d",fj(i,2));
		if(n-1) printf("\n");
	}
}