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

void main()
{

	int f(int ,int );
	int n[100],sum,i,m;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	scanf("%d",&n[i]);
	for(i=0;i<m;i++)
	{
		sum=f(1,n[i])+1;
	printf("%d\n",sum);
	}

}


int f(int i,int n)
{
	int j,k,sum=0;
	for(j=i;j<(int)sqrt((double)n)+1;j++)
	{
		
		k=sum;
		if(j==1)sum=0;
	    else
		{
			if(n%j==0&&n/j>=j)
		{
			sum=f(j,n/j)+1;
		}
			else sum=0;
		}
		sum=sum+k;

	}
	return(sum);
}

	