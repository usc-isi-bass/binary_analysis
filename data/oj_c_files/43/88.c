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

int ju(int x)
{
	int j;
	for(j=2;j<x;j++)
	{
		if(x%j==0)
			return 0;
	}
	return 1;
}
int main()
{
	int i,num,flag=0;
	int b;
	scanf("%d",&num);
	for(i=3;i<=num/2;i=i+2)
	{
		if(ju(i)==1)
		{
		b=num-i;
		if(ju(b)==1)
		{
			printf("%d %d",i,b);
			printf("\n");

		}
	}

	}		
	return 0;
}
