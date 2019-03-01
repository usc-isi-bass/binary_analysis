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

int n;
void count(int x,int y)
{
	int i;
	if(x==1) n=n+1;
	else
	{
		for(i=y;i<=x;i++)
		{
			if(x%i==0) count(x/i,i);
		}
	}
}
int main()
{
	int i,k,t;
	void count(int x,int y);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		n=0;
		scanf("%d",&t);
		count(t,2);
		printf("%d\n",n);
	}
	return 0;
}