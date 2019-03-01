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
	int a[10];
	int i=1,j,m,n,k,sum=0,t=1;
	scanf("%d",&m);
    for(i=0;i<=5;i++)
	{
	 	if(t<=m&&m<t*10)
		{
		  k=i+1;
		  break;
		}
		t*=10;
	}
	for(j=k-1;j>=0;j--)
	{
		a[j] = m%10;
		m = m/10;
	}
	for(n=k-1;n>=0;n--)
	{
		sum=sum+a[n];
		sum*=10;
	}
	sum=sum/10;
	printf("%d\n",sum);
}   
