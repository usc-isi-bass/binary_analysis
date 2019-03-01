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
	int n,a[20000],i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(a[j]!=a[i])
			{
				k=k+1;}
			if(a[j]==a[i])
			{
				k=0;break;}
		}
	
		if(k!=0)
		{
			printf(" %d",a[i]);
			k=0;}
	}
	printf("\n");
}