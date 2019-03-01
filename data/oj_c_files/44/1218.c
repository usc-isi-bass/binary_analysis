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


int rev(int n)
{
	int digit[6],i,out=0,a;
	for(i=0;;i++)
	{
		digit[i]=n%10;
		n/=10;
		if(n==0) break;
	}
	a=i+1;
	for(i=0;i<a;i++)
	{
		out+=(digit[i]*pow(10,a-1-i));
	}
	return out;
}

int main( )
{
	int n,i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&n);
		if(i!=0) printf("\n");
		printf("%d",rev(n));
	}
	return 0;
}