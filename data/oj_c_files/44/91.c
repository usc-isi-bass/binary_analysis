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

int reverse(int n);
int main()
{
	int n,k,j;
	for(j=0;j<6;j++)
	{
		scanf("%d",&n);
	if(n<0)
	{
		n=-n;
	    k=reverse(n);
	    printf("-%d\n",k);
	}
	else
	{
		 k=reverse(n);
	    printf("%d\n",k);
	}
	}
	return 0;
}
int reverse(int num)
{
	int x,i,k,a=num;
//	x=int(log10(1.0*num))+1;
	for(x=1;a>=10;x++)
	{
		a=a/10;
	}
	for(i=0,k=0;i<x;i++)
	{
		k=num%10+k*10;
		num=(num-(num%10))/10;
	}
	return k;
}