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


int sushu(int a)
{
	int result,sq,sum=0,i;
	sq=sqrt(a);
	if(a==2||a==3)result=1;
	else if(a%2==0)result=0;
	else{
	for(i=2;i<=sq;i++)
	{
		if(i%2==1)
		{	if(a%i==0)break;
			sum++;
		}
	}
	if(sum==((sq-1)/2))result=1;
	else result=0;
	}
	return result;
}

int main()
{
		int n,i,j;
		scanf("%d",&n);
		for(i=6;i<=n;i++)
		{
		if(i%2==0)
			{
			for(j=2;j<=i/2;j++)
				if(sushu(j)&&sushu(i-j))
					{
						printf("%d=%d+%d\n",i,j,i-j);	
						break;
					}
			}
		}
		return 0;
}