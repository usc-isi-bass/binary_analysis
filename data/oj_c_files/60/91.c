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

int prime(int m)
{	
	int i;	
	for(i=2;i<=sqrt(m);i++)
	{
		if(m%i==0)	
		{	
			return 0;	
			break;	
		}
	}
	if(i>sqrt(m)) 
		return 1;
}
void main()
{
	int n,i,j;
	scanf("%d",&n);
	if(n<=4) printf("empty");
	else 
	{
		for(i=2;i<n;i++)
	{
		j=i+2;
		if( prime(i) && prime(j) && j<=n)
			printf("%d %d\n",i,j);
	}
	}
	
}