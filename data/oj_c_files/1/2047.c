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

int sum=1;
void f(int i,int j)
{
	int k;
	if(i==1)
	    sum++;
	else
	{
		for(k=j;k<=i;k++)
		{
			if(i%k==0)
				f(i/k,k);
		}
	} 
}
int main(void)
{
	int i,j,k;
	int n;
	int a;
	scanf("%d",&n);
	while(n--)
	{
		sum=1;
		scanf("%d",&a);
		for(i=2;i*i<=a;i++)
		{
			if(a%i==0)
			{
				f(a/i,i);
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}