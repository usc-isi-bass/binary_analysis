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

int judge(int x);
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
		if(judge(i)==1)
		{
			j=n-i;
			if(judge(j)==1)
			{
				printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
}

int judge(int x)
{
	int i,q=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			q=0;
			break;
		}
	}
	return q;
}