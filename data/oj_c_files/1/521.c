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
	int f(int a,int min);
	int n,a[150],i,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=f(a[i],2);
		printf("%d\n",b);
	}
	return 0;
}

 
int f(int a,int min)
{ 
	int result=1,i;
	if(a < min)
	{ 
	return 0; 
	} 
	for(i = min;i<a;i++)
	{ 
		if(a % i == 0)
		{ 
		result += f(a/i,i); 
		} 
	} 
	return result; 
} 