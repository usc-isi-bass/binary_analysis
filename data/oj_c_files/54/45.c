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
	int apple,temp,i,n,k,result;
	scanf("%d%d",&n,&k);
	for(apple=0;;apple++)
	{
		temp=apple;
		for(i=1;i<=n,temp>k;i++)
		{
			if((temp-k)%n==0)
			{
				temp=temp-k-(temp-k)/n;
			}
			else break;
		}
		if(i==n+1)break;
	}
	result=apple;
	printf("%d\n",result);
}
