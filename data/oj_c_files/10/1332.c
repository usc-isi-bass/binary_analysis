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

// ????.cpp : ??????????????
//



int f(int a,int array[],int K)
{
	int i,max=0,j;
	if(a==K-1)return 1;
	else 
	{
		for(j=K-1;j>a;j--)
		{
			if(array[j]<=array[a])
			{
				if(f(j,array,K)>max)max=f(j,array,K);
			}
		}
		return max+1;
	}
	

}
int main()//(int argc, _TCHAR* argv[])
{
	int K,k,A[25],n,max=1,i;
	scanf("%d",&K);
	for(k=0;k<=K-1;k++)
	{
		scanf("%d",&A[k]);
	}
	for(i=0;i<=K-1;i++)
	{
		if(f(i,A,K)>max)max=f(i,A,K);
	}
	printf("%d",max);

}

