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

int function(int m,int n)
{
	int sum=0;
    if (m==0||m==1||n==1) 
    return 1; 
    else if (m<0)
	return 0;
    else sum=sum+function(m,n-1)+function(m-n,n);
    return sum;
}


void main()
{
	int t,i,M[20],N[20];

	scanf("%d",&t);
	for(i=0;i<=t-1;i++)
	{
		scanf("%d%d",&M[i],&N[i]);
	}

	for(i=0;i<=t-1;i++)
	{
		printf("%d\n",function(M[i],N[i]));
	}
}
