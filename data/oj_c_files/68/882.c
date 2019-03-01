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


int sushu(int k)
{
	int i;
	double m;
	if(k>10)
		m =sqrt(k);
	else
		m=k-1;
	if(k%2==0)
		return 0;
	for(i=3;i<=m;i+=2)
	{
		if((k%i)==0)
			break;
	}
	if(i<=m)
		return 0;
	else 
		return 1;
}


int main()
{
	int n,x,j,k;
	scanf("%d",&n);
	for(k=6;k<=n;k+=2)
	{
		for(x=3;x<=k;x++)
		{
			j=k-x;
			if(sushu(x)&&sushu(j))
			{	
				printf("%d=%d+%d\n",k,x,j);
				break;
			}
		}
	}

	
	
	
	
	return 0;
}