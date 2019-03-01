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

int fun(int x)
{
	int k,a=0;
	for(k=3;k<sqrt(x*1.0)+1;k+=2)
	{
		if(x%k==0){
			a=1;
		return 0;	}
	}
	if(a==0)	
	return 1;
}
int main()
{
	int n,i;
	
	scanf("%d",&n);
	if(n<5)
	{
		printf("empty");	
	}
	else 
	{
		for(i=3;i<n;i+=2)
		{
//			printf("%d %d\n",fun(i),fun(i+2));
			if(fun(i)&&fun(i+2))
			printf("%d %d\n",i,i+2);	
		}	
	}

	return 0;	
}