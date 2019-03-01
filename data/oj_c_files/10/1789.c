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

int height[26];
int max[26];
void cha(int n)
{
	int premax,i,j;
	for(i=1;i<=25;i++)
	max[i]=0;
	for(i=1;i<=n;i++)
	{   max[i]=1; 
		for(j=1;j<i;j++)
		{
		if(height[i]<=height[j])
		{
		premax=max[j]+1;
		if (premax>max[i])
		max[i]=premax;
	    }
	    }
	}
}
int main()
{
	int n,num,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&height[i]);
	cha(n);
	num=-1;
	for(i=1;i<=n;i++)
	{
		if(num<max[i])
		num=max[i];
	}
	printf("%d",num);
}