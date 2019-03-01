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

int main()
{
	int A[20000],B[20000],n,i,j,k;
	int flag;
	int number=0;
	j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		flag=0;
		for(k=0;k<i;k++)
		{
			if(A[k]==A[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			B[j]=A[i];
			number=number+1;
			j=j+1;
		}
	}
	for(j=0;j<number;j++)
	{
		if(j==0)
		{
			printf("%d",B[j]);
		}
		else 
		{
			printf(" %d",B[j]);
		}
	}
	return 0;
}

