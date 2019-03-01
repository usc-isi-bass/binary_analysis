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
	int n,m,i,j,x;
	do
	{
		scanf("%d",&n);
	}
	while(n<6&&n>=50000);	
	for(m=6;m<=n;m=m+2)
	{
		for(i=3;i<=m/2;i=i+2)
		{

			for(j=2;j<=sqrt(i);j++)               //??i?????
				if(i%j==0)
					break;
			if(i%j==0)
				continue;
			x=m-i;
			for(j=2;j<=sqrt(x);j++)               //??X?????
				if(x%j==0)
					break;
			if(j>sqrt(x))
			{
				printf("%d=%d+%d\n",m,i,x);
				break;
			}			
		}
	}
	return 0;
}