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

int f(int a,int min)
{ 
	if(a<min)
	{ 
		return 0; 
	} 
	int result=1,i; 
	for(i=min;i<a;i++)
	{ 
		if(a%i==0)
		{ 
			result+=f(a/i,i); 
		} 
	} 
	return (result); 
} 
int main()
{
    int n,a[100],b[100],i;
	scanf("%d\n",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
    for(i=0;i<n;i++)
	{
		b[i]=f(a[i],2);
	}
    for(i=0;i<n;i++)
	{printf("%d\n",b[i]);}
	return 0;
}
