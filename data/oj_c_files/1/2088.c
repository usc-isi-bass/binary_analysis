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

int f(int num,int i)
{
	int sum;
	sum=0;
	int j;
		for(j=i;j<=num/2;j++)
		{
			if(num%j==0)
			{
				if(num/j<j)
				{
					sum=sum;
				}else{
					sum=1+sum+f(num/j,j);
				}
			}
		}
	return sum;
}
int main()
{
	int n,num,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		int j,sum;
		sum=0;
		j=2;
	        	sum+=f(num,j);
		printf("%d\n",sum+1);
	}
	return 0;
}