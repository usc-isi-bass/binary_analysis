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
	int a[100];
	int i,n,number,count,countl;
	count=0;
	countl=0;
	for(i=0;i<100;i++)
	{
		a[i]=0;
	}
	scanf("%d",&n);
	int b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&number);
		if(a[number]==0)
		{
			a[number]=1;
		
			b[count]=number;
				count=count+1;
		}		
	}
	for(i=0;i<count;i++)
	{
			countl=countl+1;
			printf("%d",b[i]);
			if(countl<count)
			{
				printf(" ");
			}
		
	}

	return 0;
}